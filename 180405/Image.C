#define Image_cxx
#include "Image.h"
#include <iostream>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

#include "Normalization.h"

void Image::Loop()
{
  //   In a ROOT session, you can do:
  //      root> .L Image.C
  //      root> Image t
  //      root> t.GetEntry(12); // Fill t data members with entry number 12
  //      root> t.Show();       // Show values of entry 12
  //      root> t.Show(16);     // Read and show values of entry 16
  //      root> t.Loop();       // Loop on all entries
  //

  //     This is the loop skeleton where:
  //    jentry is the global entry number in the chain
  //    ientry is the entry number in the current Tree
  //  Note that the argument to GetEntry must be:
  //    jentry for TChain::GetEntry
  //    ientry for TTree::GetEntry and TBranch::GetEntry
  //
  //       To read only selected branches, Insert statements like:
  // METHOD1:
  //    fChain->SetBranchStatus("*",0);  // disable all branches
  //    fChain->SetBranchStatus("branchname",1);  // activate branchname
  // METHOD2: replace line
  //    fChain->GetEntry(jentry);       //read all branches
  //by  b_branchname->GetEntry(ientry); //read only this branch
  if (fChain == 0) return;

  Long64_t nentries = fChain->GetEntriesFast();
  std::cout << "Calculate SNR for image reconstructed by BP with/without TOF." << std::endl;

  // First loop to calculate mean of ROI
  TH2D* h2_TOF   = new TH2D("h2_TOF",  "",160,-20,20,160,-20,20);  
  TH2D* h2_noTOF = new TH2D("h2_noTOF","",160,-20,20,160,-20,20);  
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;
    h2_TOF  ->Fill(x,y,tof);
    h2_noTOF->Fill(x,y,notof);
  }

  std::cout << "Normalization" << std::endl;
  // Get histogram of emission points for normalization
  Normalization* t = new Normalization();
  t->Loop();
  TH2D* h2_emi = t->Normalization::getHisto();
  Double_t total = h2_emi->Integral();
  h2_emi->Scale(1./total);

  std::cout << "Normalize the reconstructed image" << std::endl;
  TH2D* h2_TOF_norm   = new TH2D("h2_TOF_norm",    "",160,-20,20,160,-20,20);
  TH2D* h2_noTOF_norm = new TH2D("h2_noTOF_norm",  "",160,-20,20,160,-20,20);
  TH2D* h2_ROI        = new TH2D("h2_ROI",         "",160,-20,20,160,-20,20);
  const Int_t nBins = h2_emi->GetMaximumBin();
  for (Int_t ix = 1; ix<=nBins; ix++) {
    for (Int_t iy = 1; iy<=nBins; iy++) {
        h2_ROI       ->SetBinContent(ix, iy, 1);
      // if (IsSelection(ix,iy,nBins)){
        Double_t emi = h2_emi->GetBinContent(ix,iy);
        Double_t tof = h2_TOF->GetBinContent(ix,iy);
        Double_t ntof= h2_noTOF->GetBinContent(ix,iy);
        h2_TOF_norm  ->SetBinContent(ix, iy, (tof/emi));
        h2_noTOF_norm->SetBinContent(ix, iy, (ntof/emi));
      // }
    }
  }


  Double_t sum_TOF, sum_noTOF;
  Int_t totalBins=0;
  for (Int_t ix = 1; ix<=nBins; ix++) {
    for (Int_t iy = 1; iy<=nBins; iy++) {
      // if (IsSelection(ix,iy,nBins)){
        sum_TOF   += h2_TOF_norm  ->GetBinContent(ix,iy);
        sum_noTOF += h2_noTOF_norm->GetBinContent(ix,iy);
        totalBins++;
      // }
    }
  }
  Double_t mean_TOF   = sum_TOF/(Double_t)totalBins;
  Double_t mean_noTOF = sum_noTOF/(Double_t)totalBins;

  Double_t sd2_TOF, sd2_noTOF;
  for (Int_t ix = 1; ix<=nBins; ix++) {
    for (Int_t iy = 1; iy<=nBins; iy++) {
      // if (IsSelection(ix,iy,nBins)){
        Double_t tof   = h2_TOF_norm  ->GetBinContent(ix,iy);
        Double_t notof = h2_noTOF_norm->GetBinContent(ix,iy);
        sd2_TOF  +=pow((tof  -mean_TOF),2);
        sd2_noTOF+=pow((notof-mean_noTOF),2);
      // }
    }
  }
  const Double_t sd_TOF   = sqrt(sd2_TOF  /(Double_t)totalBins);
  const Double_t sd_noTOF = sqrt(sd2_noTOF/(Double_t)totalBins);
  std::cout << "SD with TOF: "    << sd_TOF   << std::endl;
  std::cout << "SD without TOF: " << sd_noTOF << std::endl;
  Double_t snr_TOF  = mean_TOF  /sd_TOF;
  Double_t snr_noTOF= mean_noTOF/sd_noTOF;
  std::cout << "SNR with TOF: " << snr_TOF << std::endl;
  std::cout << "SNR without TOF: " << snr_noTOF << std::endl;
  std::cout << "SNR_TOF/SNR_noTOF: " << snr_TOF/snr_noTOF << std::endl;

  TCanvas *c1 = new TCanvas("c1","c1",1200,800);
  gStyle->SetPalette(1);
  c1->Divide(3,2);
  c1->cd(1);
  h2_TOF  ->Draw("colz");
  c1->cd(2);
  h2_noTOF  ->Draw("colz");
  c1->cd(4);
  h2_TOF_norm->Draw("colz");
  c1->cd(5);
  h2_noTOF_norm->Draw("colz");
  c1->cd(3);
  h2_emi->Draw("colz");
  c1->cd(6);
  h2_ROI->Draw("colz");
  c1->SaveAs("180406_validation04.pdf");
}


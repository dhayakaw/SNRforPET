#define calSNR_cxx
#include "calSNR.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

#include <iostream>

void calSNR::Loop()
{
  //   In a ROOT session, you can do:
  //      root> .L calSNR.C
  //      root> calSNR t
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

  Long64_t nbytes = 0, nb = 0;

  std::cout << "Calculate SNR for image reconstructed by BP with/without TOF." << std::endl;
  std::cout << "The 2D image will be selected 24 mm squre and projected x axis." << std::endl;

  // First loop to calculate mean of ROI
  Double_t sum_TOF, sum_noTOF;
  TH2D* h2_TOF   = new TH2D("h2_TOF",  "",100,-20,20,100,-20,20);  
  TH2D* h2_noTOF = new TH2D("h2_noTOF","",100,-20,20,100,-20,20);  
  Long64_t nSelectedEntries=0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;

    h2_TOF  ->Fill(x,y,tof);
    h2_noTOF->Fill(x,y,notof);
    if (IsSelection(x,y)){
      if (IsROI(x)){
        sum_TOF  +=tof;
        sum_noTOF+=notof;
        nSelectedEntries++;
      }
    }
  }
  std::cout << "Number of selected entries: " << nSelectedEntries << std::endl;
  const Double_t mean_TOF   = sum_TOF  /(Double_t)nSelectedEntries;
  const Double_t mean_noTOF = sum_noTOF/(Double_t)nSelectedEntries;
  std::cout << "Mean with TOF: "    << mean_TOF   << std::endl;
  std::cout << "Mean without TOF: " << mean_noTOF << std::endl;

  TCanvas *c1 = new TCanvas("c1","c1",1000,500);
  gStyle->SetPalette(1);
  c1->Divide(2,1);
  c1->cd(1);
  h2_TOF  ->Draw("colz");
  c1->cd(2);
  h2_noTOF->Draw("colz");

  nbytes = 0, nb = 0;
  Double_t sd2_TOF, sd2_noTOF;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;

    if (IsSelection(x,y)){
      if (IsROI(x)){
        sd2_TOF  +=pow((tof  -mean_TOF),2);
        sd2_noTOF+=pow((notof-mean_TOF),2);
      }
    }
  }
  const Double_t sd_TOF   = sqrt(sd2_TOF  /(Double_t)nSelectedEntries);
  const Double_t sd_noTOF = sqrt(sd2_noTOF/(Double_t)nSelectedEntries);
  std::cout << "SD with TOF: "    << sd_TOF   << std::endl;
  std::cout << "SD without TOF: " << sd_noTOF << std::endl;
  Double_t snr_TOF  = mean_TOF  /sd_TOF;
  Double_t snr_noTOF= mean_noTOF/sd_noTOF;
  cout << m_dROI << " mm length and placed along x axis centerd at " << m_per << endl;
  cout << "SNR with TOF: " << snr_TOF << endl;
  cout << "SNR without TOF: " << snr_noTOF << endl;
  cout << "SNR_TOF/SNR_noTOF: " << snr_TOF/snr_noTOF << endl;
}

Bool_t calSNR::IsSelection(const Double_t& x, const Double_t& y) {
  Double_t thr = m_dSQR/2;
  if (x>thr or x<-1*thr or y>thr or y<-1*thr){
    // std::cout << "selection x: " << x << ", y: " << y << std::endl; // FOR DEBUG
    return false;
  }
  return true;
}

Bool_t calSNR::IsROI(const Double_t& x) {
  Double_t centerOfDOI = m_per*m_dSQR/2;
  if (abs(centerOfDOI-x)<m_dROI){
    // std::cout << "ROI x: " << x << std::endl; // FOR DEBUG
    return true;
  }
  return false;
}


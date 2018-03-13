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
   TH2D* h2_TOF = new TH2D("h2","",100,-20,20,100,-20,20);  
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      h2_TOF->Fill(x,y,tof);
      if (IsSelection(x,y)){
        if (IsROI(x)){
          sum_TOF+=tof;
          sum_noTOF+=notof;
        }
      }
   }
   std::cout << "sum with TOF: " << sum_TOF << std::endl;
   std::cout << "sum without TOF: " << sum_noTOF << std::endl;

   gStyle->SetPalette(1);
   h2_TOF->Draw("colz");
}

Bool_t calSNR::IsSelection(Double_t& x, Double_t& y) {
  Double_t thr = m_dSQR/2;
  if ((x>thr or x<-1*thr) and (y>thr or y<-1*thr)){
    return true;
  }
  std::cout << "selection x: " << x << ", y: " << y << std::endl;
  return false;
}

Bool_t calSNR::IsROI(Double_t& x) {
  Double_t centerOfDOI = m_per*m_dSQR/2;
  if (abs(centerOfDOI-x)<m_dROI){
    std::cout << "ROI x: " << x << std::endl;
    return true;
  }
  return false;
}


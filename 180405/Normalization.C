#define Normalization_cxx
#include "Normalization.h"
#include <TStyle.h>
#include <TCanvas.h>

void Normalization::Loop()
{
//   In a ROOT session, you can do:
//      root> .L Normalization.C
//      root> Normalization t
//      root> t.GetEntry(12); // Fill t data members with entry number 12 //      root> t.Show();       // Show values of entry 12
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
  // TH2D* h2_emi   = new TH2D("h2_emi",  "",100,-20,20,100,-20,20);
  // TH2D* h2_dif   = new TH2D("h2_dif",  "",100,-20,20,100,-20,20);
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;
    m_h2_emi->Fill(xemi,yemi);
    // h2_dif->Fill(xemi-xgen,yemi-ygen);
  }
  // TCanvas *c1 = new TCanvas("c1","c1",1000,500);
  // gStyle->SetPalette(1);
  // c1->Divide(2,1);
  // c1->cd(1);
  // m_h2_emi->Draw("colz");
  // c1->cd(2);
  // h2_dif->Draw("colz");
}

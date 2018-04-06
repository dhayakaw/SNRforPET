//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Mar 13 15:28:10 2018 by ROOT version 6.12/06
// from TTree image/image tree
// found on file: image_pixel200um_132_0_1000.root
//////////////////////////////////////////////////////////

#ifndef calSNR_h
#define calSNR_h

#include <math.h>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class calSNR {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Double_t        x;
   Double_t        y;
   Double_t        tof;
   Double_t        notof;
   Double_t        fbp;
   Double_t        fbptof;

   // List of branches
   TBranch        *b_x;   //!
   TBranch        *b_y;   //!
   TBranch        *b_tof;   //!
   TBranch        *b_notof;   //!
   TBranch        *b_fbp;   //!
   TBranch        *b_fbptof;   //!

   calSNR(TTree *tree=0);
   virtual ~calSNR();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);

   // fuction for selection
   virtual Bool_t IsSelection(const Double_t& x, const Double_t& y);
   virtual Bool_t IsROI(const Double_t& x);

   const Double_t m_dPET=40; // diameter of PET (mm)
   const Double_t m_dROI=4; // length of ROI (mm)
   const Double_t m_dSQR=24; // lenth of selection to project (mm)
   const Double_t m_per =0.5; // percentage along the x axis for central position of ROI
};

#endif

#ifdef calSNR_cxx
calSNR::calSNR(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("image_pixel200um_132_0_1000.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("image_pixel200um_132_0_1000.root");
      }
      f->GetObject("image",tree);

   }
   Init(tree);
}

calSNR::~calSNR()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t calSNR::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t calSNR::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void calSNR::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("x", &x, &b_x);
   fChain->SetBranchAddress("y", &y, &b_y);
   fChain->SetBranchAddress("tof", &tof, &b_tof);
   fChain->SetBranchAddress("notof", &notof, &b_notof);
   fChain->SetBranchAddress("fbp", &fbp, &b_fbp);
   fChain->SetBranchAddress("fbptof", &fbptof, &b_fbptof);
   Notify();
}

Bool_t calSNR::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void calSNR::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t calSNR::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef calSNR_cxx

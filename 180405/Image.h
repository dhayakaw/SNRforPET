//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Apr  5 17:22:13 2018 by ROOT version 6.06/02
// from TTree image/image tree
// found on file: image_15000_15200_0_1000.root
//////////////////////////////////////////////////////////

#ifndef Image_h
#define Image_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class Image {
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

    Image(TTree *tree=0);
    virtual ~Image();
    virtual Int_t    Cut(Long64_t entry);
    virtual Int_t    GetEntry(Long64_t entry);
    virtual Long64_t LoadTree(Long64_t entry);
    virtual void     Init(TTree *tree);
    virtual void     Loop();
    virtual Bool_t   Notify();
    virtual void     Show(Long64_t entry = -1);

  private:  
    const bool IsSelection(const Int_t ix, const Int_t iy, const Int_t nBins);
    const Double_t m_radius=15.; //mm
    const Double_t m_size=40.; //mm
}; 
#endif

#ifdef Image_cxx
Image::Image(TTree *tree) : fChain(0) 
{
  // if parameter tree is not specified (or zero), connect the file
  // used to generate this class and read the Tree.
  if (tree == 0) {
    TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("image_15000_15200_0_1000.root");
    if (!f || !f->IsOpen()) {
      f = new TFile("image_15000_15200_0_1000.root");
    }
    f->GetObject("image",tree);

  }
  Init(tree);
}

Image::~Image()
{
  if (!fChain) return;
  delete fChain->GetCurrentFile();
}

Int_t Image::GetEntry(Long64_t entry)
{
  // Read contents of entry.
  if (!fChain) return 0;
  return fChain->GetEntry(entry); }
Long64_t Image::LoadTree(Long64_t entry)
{
  // Set the environment to read one entry
  if (!fChain) return -5;
  Long64_t centry = fChain->LoadTree(entry);
  if (centry < 0) return centry;
  if (fChain->GetTreeNumber() != fCurrent) {
    fCurrent = fChain->GetTreeNumber(); Notify();
  }
  return centry;
}

void Image::Init(TTree *tree)
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

Bool_t Image::Notify()
{
  // The Notify() function is called when a new file is opened. This
  // can be either for a new TTree in a TChain or when when a new TTree
  // is started when using PROOF. It is normally not necessary to make changes
  // to the generated code, but the routine can be extended by the
  // user if needed. The return value is currently not used.

  return kTRUE;
}

void Image::Show(Long64_t entry)
{
  // Print contents of entry.
  // If entry is not specified, print current entry
  if (!fChain) return;
  fChain->Show(entry);
}
Int_t Image::Cut(Long64_t entry)
{
  // This function may be called from Loop.
  // returns  1 if entry is accepted.
  // returns -1 otherwise.
  return 1;
}
const bool Image::IsSelection(const Int_t ix, const Int_t iy, const Int_t nBins) 
{
  Double_t x = m_size*(-0.5 + ((Double_t)ix-0.5)/(Double_t)nBins);
  Double_t y = m_size*(-0.5 + ((Double_t)iy-0.5)/(Double_t)nBins);
  Double_t r = sqrt(x*x+y*y);
  if (r>m_radius){
    return false;
  } else {
    return true;
  }
}
#endif // #ifdef Image_cxx

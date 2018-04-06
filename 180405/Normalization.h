//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Apr  5 14:36:32 2018 by ROOT version 6.06/02
// from TChain rec/rec
//////////////////////////////////////////////////////////

#ifndef Normalization_h
#define Normalization_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH2.h>

// Header file for the classes stored in the TTree if any.

class Normalization {
  public :
    TTree          *fChain;   //!pointer to the analyzed TTree or TChain
    Int_t           fCurrent; //!current Tree number in a TChain

    // Fixed size dimensions of array or collections stored in the TTree if any.

    // Declaration of leaf types
    Int_t           nevents;
    Int_t           PhantomComptonCounter;
    Int_t           GammaInCounter;
    Double_t        xemi;
    Double_t        yemi;
    Double_t        zemi;
    Double_t        xgen;
    Double_t        ygen;
    Double_t        zgen;
    Int_t           Nsampletof;
    Int_t           triggered;
    Int_t           gammaID1[5];   //[triggered]
    Int_t           gammaID2[5];   //[triggered]
    Int_t           hitID1[5];   //[triggered]
    Int_t           hitID2[5];   //[triggered]
    Double_t        gammainangle[5];   //[triggered]
    Double_t        gammaannihilangle[5];   //[triggered]
    Double_t        gammamidangle1[5];   //[triggered]
    Double_t        gammamidangle2[5];   //[triggered]
    Double_t        Eannihil1[5];   //[triggered]
    Double_t        Eannihil2[5];   //[triggered]
    Double_t        samecell1[5];   //[triggered]
    Double_t        sharedcharge1[5];   //[triggered]
    Double_t        samecell2[5];   //[triggered]
    Double_t        sharedcharge2[5];   //[triggered]
    Double_t        flagannihil2[5];   //[triggered]
    Double_t        flagint2[5];   //[triggered]
    Double_t        flagannihil1[5];   //[triggered]
    Double_t        flagint1[5];   //[triggered]
    Int_t           randomcoinc[5];   //[triggered]
    Double_t        xsin[5];   //[triggered]
    Double_t        ysin[5];   //[triggered]
    Double_t        zsin[5];   //[triggered]
    Double_t        phi[5];   //[triggered]
    Double_t        theta[5];   //[triggered]
    Double_t        ene2[5];   //[triggered]
    Double_t        ene1[5];   //[triggered]
    Double_t        tot2[5];   //[triggered]
    Double_t        tot1[5];   //[triggered]
    Int_t           chip2[5];   //[triggered]
    Int_t           chip1[5];   //[triggered]
    Int_t           pix2[5];   //[triggered]
    Int_t           pix1[5];   //[triggered]
    Int_t           dead2[5];   //[triggered]
    Int_t           dead1[5];   //[triggered]
    Double_t        deltat[5];   //[triggered]
    Int_t           pad2[5];   //[triggered]
    Int_t           pad1[5];   //[triggered]
    Int_t           cell2[5];   //[triggered]
    Int_t           cell1[5];   //[triggered]
    Double_t        sigmat2[5];   //[triggered]
    Double_t        sigmat1[5];   //[triggered]
    Double_t        stof[5];   //[triggered]
    Double_t        sign[5];   //[triggered]
    Double_t        xint1[5];   //[triggered]
    Double_t        yint1[5];   //[triggered]
    Double_t        zint1[5];   //[triggered]
    Double_t        xint2[5];   //[triggered]
    Double_t        yint2[5];   //[triggered]
    Double_t        zint2[5];   //[triggered]
    Double_t        xint_true1[5];   //[triggered]
    Double_t        yint_true1[5];   //[triggered]
    Double_t        zint_true1[5];   //[triggered]
    Double_t        Eint1[5];   //[triggered]
    Double_t        xint_true2[5];   //[triggered]
    Double_t        yint_true2[5];   //[triggered]
    Double_t        zint_true2[5];   //[triggered]
    Double_t        Eint2[5];   //[triggered]
    Double_t        xhit1[5];   //[triggered]
    Double_t        yhit1[5];   //[triggered]
    Double_t        zhit1[5];   //[triggered]
    Double_t        xhit2[5];   //[triggered]
    Double_t        yhit2[5];   //[triggered]
    Double_t        zhit2[5];   //[triggered]

    // List of branches
    TBranch        *b_nevents;   //!
    TBranch        *b_PhantomComptonCounter;   //!
    TBranch        *b_GammaInCounter;   //!
    TBranch        *b_xemi;   //!
    TBranch        *b_yemi;   //!
    TBranch        *b_zemi;   //!
    TBranch        *b_xgen;   //!
    TBranch        *b_ygen;   //!
    TBranch        *b_zgen;   //!
    TBranch        *b_Nsampletof;   //!
    TBranch        *b_triggered;   //!
    TBranch        *b_gammaID1;   //!
    TBranch        *b_gammaID2;   //!
    TBranch        *b_hitID1;   //!
    TBranch        *b_hitID2;   //!
    TBranch        *b_gammainangle;   //!
    TBranch        *b_gammaannihilangle;   //!
    TBranch        *b_gammamidangle1;   //!
    TBranch        *b_gammamidangle2;   //!
    TBranch        *b_Eannihil1;   //!
    TBranch        *b_Eannihil2;   //!
    TBranch        *b_samecell1;   //!
    TBranch        *b_sharedcharge1;   //!
    TBranch        *b_samecell2;   //!
    TBranch        *b_sharedcharge2;   //!
    TBranch        *b_flagannihil2;   //!
    TBranch        *b_flagint2;   //!
    TBranch        *b_flagannihil1;   //!
    TBranch        *b_flagint1;   //!
    TBranch        *b_randomcoinc;   //!
    TBranch        *b_xsin;   //!
    TBranch        *b_ysin;   //!
    TBranch        *b_zsin;   //!
    TBranch        *b_phi;   //!
    TBranch        *b_theta;   //!
    TBranch        *b_ene2;   //!
    TBranch        *b_ene1;   //!
    TBranch        *b_tot2;   //!
    TBranch        *b_tot1;   //!
    TBranch        *b_chip2;   //!
    TBranch        *b_chip1;   //!
    TBranch        *b_pix2;   //!
    TBranch        *b_pix1;   //!
    TBranch        *b_dead2;   //!
    TBranch        *b_dead1;   //!
    TBranch        *b_deltat;   //!
    TBranch        *b_pad2;   //!
    TBranch        *b_pad1;   //!
    TBranch        *b_cell2;   //!
    TBranch        *b_cell1;   //!
    TBranch        *b_sigmat2;   //!
    TBranch        *b_sigmat1;   //!
    TBranch        *b_stof;   //!
    TBranch        *b_sign;   //!
    TBranch        *b_xint1;   //!
    TBranch        *b_yint1;   //!
    TBranch        *b_zint1;   //!
    TBranch        *b_xint2;   //!
    TBranch        *b_yint2;   //!
    TBranch        *b_zint2;   //!
    TBranch        *b_xint_true1;   //!
    TBranch        *b_yint_true1;   //!
    TBranch        *b_zint_true1;   //!
    TBranch        *b_Eint1;   //!
    TBranch        *b_xint_true2;   //!
    TBranch        *b_yint_true2;   //!
    TBranch        *b_zint_true2;   //!
    TBranch        *b_Eint2;   //!
    TBranch        *b_xhit1;   //!
    TBranch        *b_yhit1;   //!
    TBranch        *b_zhit1;   //!
    TBranch        *b_xhit2;   //!
    TBranch        *b_yhit2;   //!
    TBranch        *b_zhit2;   //!

    Normalization(TTree *tree=0);
    virtual ~Normalization();
    virtual Int_t    Cut(Long64_t entry);
    virtual Int_t    GetEntry(Long64_t entry);
    virtual Long64_t LoadTree(Long64_t entry);
    virtual void     Init(TTree *tree);
    virtual void     Loop();
    virtual Bool_t   Notify();
    virtual void     Show(Long64_t entry = -1);

  // original functions and variables
  public:
    TH2D* getHisto();

  private:
    TH2D* m_h2_emi;
};

#endif

#ifdef Normalization_cxx
Normalization::Normalization(TTree *tree) : fChain(0)
{
  m_h2_emi = new TH2D("m_h2_emi",  "",160,-20,20,160,-20,20);
  // if parameter tree is not specified (or zero), connect the file
  // used to generate this class and read the Tree.
  if (tree == 0) {

#ifdef SINGLE_TREE
    // The following code should be used if you want this class to access
    // a single tree instead of a chain
    TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Memory Directory");
    if (!f || !f->IsOpen()) {
      f = new TFile("Memory Directory");
    }
    f->GetObject("rec",tree);

#else // SINGLE_TREE

    // The following code should be used if you want this class to access a chain
    // of trees.
    TChain * chain = new TChain("rec","rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15001_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15002_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15003_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15004_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15005_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15006_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15007_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15008_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15009_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15010_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15011_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15012_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15013_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15014_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15015_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15016_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15017_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15018_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15019_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15020_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15021_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15022_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15023_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15024_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15025_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15026_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15027_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15028_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15029_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15030_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15031_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15032_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15033_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15034_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15035_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15036_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15037_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15038_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15039_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15040_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15041_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15042_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15043_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15044_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15045_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15046_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15047_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15048_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15049_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15050_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15051_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15052_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15053_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15054_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15055_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15056_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15057_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15058_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15059_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15060_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15061_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15062_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15063_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15064_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15065_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15066_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15067_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15068_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15069_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15070_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15071_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15072_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15073_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15074_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15075_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15076_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15077_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15078_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15079_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15080_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15081_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15082_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15083_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15084_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15085_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15086_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15087_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15088_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15089_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15090_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15091_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15092_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15093_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15094_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15095_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15096_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15097_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15098_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15099_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15100_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15101_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15102_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15103_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15104_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15105_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15106_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15107_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15108_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15109_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15110_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15111_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15112_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15113_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15114_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15115_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15116_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15117_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15118_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15119_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15120_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15121_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15122_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15123_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15124_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15125_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15126_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15127_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15128_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15129_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15130_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15131_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15132_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15133_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15134_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15135_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15136_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15137_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15138_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15139_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15140_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15141_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15142_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15143_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15144_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15145_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15146_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15147_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15148_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15149_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15150_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15151_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15152_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15153_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15154_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15155_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15156_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15157_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15158_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15159_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15160_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15161_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15162_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15163_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15164_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15165_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15166_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15167_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15168_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15169_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15170_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15171_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15172_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15173_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15174_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15175_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15176_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15177_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15178_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15179_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15180_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15181_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15182_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15183_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15184_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15185_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15186_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15187_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15188_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15189_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15190_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15191_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15192_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15193_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15194_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15195_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15196_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15197_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15198_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15199_sigmatsel0.root/rec");
    chain->Add("/beegfs/atlas/data5/eripicci/TTPET/MC/derenzophantomstudy/mixing/analyzed15200_sigmatsel0.root/rec");
    tree = chain;
#endif // SINGLE_TREE

  }
  Init(tree);
}

Normalization::~Normalization()
{
  if (!fChain) return;
  delete fChain->GetCurrentFile();
}

Int_t Normalization::GetEntry(Long64_t entry)
{
  // Read contents of entry.
  if (!fChain) return 0;
  return fChain->GetEntry(entry);
}
Long64_t Normalization::LoadTree(Long64_t entry)
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

void Normalization::Init(TTree *tree)
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

  fChain->SetBranchAddress("nevents", &nevents, &b_nevents);
  fChain->SetBranchAddress("PhantomComptonCounter", &PhantomComptonCounter, &b_PhantomComptonCounter);
  fChain->SetBranchAddress("GammaInCounter", &GammaInCounter, &b_GammaInCounter);
  fChain->SetBranchAddress("xemi", &xemi, &b_xemi);
  fChain->SetBranchAddress("yemi", &yemi, &b_yemi);
  fChain->SetBranchAddress("zemi", &zemi, &b_zemi);
  fChain->SetBranchAddress("xgen", &xgen, &b_xgen);
  fChain->SetBranchAddress("ygen", &ygen, &b_ygen);
  fChain->SetBranchAddress("zgen", &zgen, &b_zgen);
  fChain->SetBranchAddress("Nsampletof", &Nsampletof, &b_Nsampletof);
  fChain->SetBranchAddress("triggered", &triggered, &b_triggered);
  fChain->SetBranchAddress("gammaID1", gammaID1, &b_gammaID1);
  fChain->SetBranchAddress("gammaID2", gammaID2, &b_gammaID2);
  fChain->SetBranchAddress("hitID1", hitID1, &b_hitID1);
  fChain->SetBranchAddress("hitID2", hitID2, &b_hitID2);
  fChain->SetBranchAddress("gammainangle", gammainangle, &b_gammainangle);
  fChain->SetBranchAddress("gammaannihilangle", gammaannihilangle, &b_gammaannihilangle);
  fChain->SetBranchAddress("gammamidangle1", gammamidangle1, &b_gammamidangle1);
  fChain->SetBranchAddress("gammamidangle2", gammamidangle2, &b_gammamidangle2);
  fChain->SetBranchAddress("Eannihil1", Eannihil1, &b_Eannihil1);
  fChain->SetBranchAddress("Eannihil2", Eannihil2, &b_Eannihil2);
  fChain->SetBranchAddress("samecell1", samecell1, &b_samecell1);
  fChain->SetBranchAddress("sharedcharge1", sharedcharge1, &b_sharedcharge1);
  fChain->SetBranchAddress("samecell2", samecell2, &b_samecell2);
  fChain->SetBranchAddress("sharedcharge2", sharedcharge2, &b_sharedcharge2);
  fChain->SetBranchAddress("flagannihil2", flagannihil2, &b_flagannihil2);
  fChain->SetBranchAddress("flagint2", flagint2, &b_flagint2);
  fChain->SetBranchAddress("flagannihil1", flagannihil1, &b_flagannihil1);
  fChain->SetBranchAddress("flagint1", flagint1, &b_flagint1);
  fChain->SetBranchAddress("randomcoinc", randomcoinc, &b_randomcoinc);
  fChain->SetBranchAddress("xsin", xsin, &b_xsin);
  fChain->SetBranchAddress("ysin", ysin, &b_ysin);
  fChain->SetBranchAddress("zsin", zsin, &b_zsin);
  fChain->SetBranchAddress("phi", phi, &b_phi);
  fChain->SetBranchAddress("theta", theta, &b_theta);
  fChain->SetBranchAddress("ene2", ene2, &b_ene2);
  fChain->SetBranchAddress("ene1", ene1, &b_ene1);
  fChain->SetBranchAddress("tot2", tot2, &b_tot2);
  fChain->SetBranchAddress("tot1", tot1, &b_tot1);
  fChain->SetBranchAddress("chip2", chip2, &b_chip2);
  fChain->SetBranchAddress("chip1", chip1, &b_chip1);
  fChain->SetBranchAddress("pix2", pix2, &b_pix2);
  fChain->SetBranchAddress("pix1", pix1, &b_pix1);
  fChain->SetBranchAddress("dead2", dead2, &b_dead2);
  fChain->SetBranchAddress("dead1", dead1, &b_dead1);
  fChain->SetBranchAddress("deltat", deltat, &b_deltat);
  fChain->SetBranchAddress("pad2", pad2, &b_pad2);
  fChain->SetBranchAddress("pad1", pad1, &b_pad1);
  fChain->SetBranchAddress("cell2", cell2, &b_cell2);
  fChain->SetBranchAddress("cell1", cell1, &b_cell1);
  fChain->SetBranchAddress("sigmat2", sigmat2, &b_sigmat2);
  fChain->SetBranchAddress("sigmat1", sigmat1, &b_sigmat1);
  fChain->SetBranchAddress("stof", stof, &b_stof);
  fChain->SetBranchAddress("sign", sign, &b_sign);
  fChain->SetBranchAddress("xint1", xint1, &b_xint1);
  fChain->SetBranchAddress("yint1", yint1, &b_yint1);
  fChain->SetBranchAddress("zint1", zint1, &b_zint1);
  fChain->SetBranchAddress("xint2", xint2, &b_xint2);
  fChain->SetBranchAddress("yint2", yint2, &b_yint2);
  fChain->SetBranchAddress("zint2", zint2, &b_zint2);
  fChain->SetBranchAddress("xint_true1", xint_true1, &b_xint_true1);
  fChain->SetBranchAddress("yint_true1", yint_true1, &b_yint_true1);
  fChain->SetBranchAddress("zint_true1", zint_true1, &b_zint_true1);
  fChain->SetBranchAddress("Eint1", Eint1, &b_Eint1);
  fChain->SetBranchAddress("xint_true2", xint_true2, &b_xint_true2);
  fChain->SetBranchAddress("yint_true2", yint_true2, &b_yint_true2);
  fChain->SetBranchAddress("zint_true2", zint_true2, &b_zint_true2);
  fChain->SetBranchAddress("Eint2", Eint2, &b_Eint2);
  fChain->SetBranchAddress("xhit1", xhit1, &b_xhit1);
  fChain->SetBranchAddress("yhit1", yhit1, &b_yhit1);
  fChain->SetBranchAddress("zhit1", zhit1, &b_zhit1);
  fChain->SetBranchAddress("xhit2", xhit2, &b_xhit2);
  fChain->SetBranchAddress("yhit2", yhit2, &b_yhit2);
  fChain->SetBranchAddress("zhit2", zhit2, &b_zhit2);
  Notify();
}

Bool_t Normalization::Notify()
{
  // The Notify() function is called when a new file is opened. This
  // can be either for a new TTree in a TChain or when when a new TTree
  // is started when using PROOF. It is normally not necessary to make changes
  // to the generated code, but the routine can be extended by the
  // user if needed. The return value is currently not used.

  return kTRUE;
}

void Normalization::Show(Long64_t entry)
{
  // Print contents of entry.
  // If entry is not specified, print current entry
  if (!fChain) return;
  fChain->Show(entry);
}
Int_t Normalization::Cut(Long64_t entry)
{
  // This function may be called from Loop.
  // returns  1 if entry is accepted.
  // returns -1 otherwise.
  return 1;
}

TH2D* Normalization::getHisto()
{
  return m_h2_emi;
}
#endif // #ifdef Normalization_cxx

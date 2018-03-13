#include <TFile.h>
#include <TH1.h>

#include <iostream>

using namespace std;

const Double_t dPET = 40; // diameter of PET (mm)
const Double_t dROI = 6;  // diameter of ROI (mm)
const Double_t per = 0.8; // percentage

bool IsROI(const int ix, const int iy, const int i_fin) {
  Double_t thrX = 0.5*dPET*per;
  Double_t x = dPET/i_fin*(ix-1);
  Double_t y = dPET/i_fin*(iy-1);
  if(sqrt((x-thrX)*(x-thrX)+y*y)<dROI/2){
    // cout << "x: " << x << ", y: " << y << endl;
    return true;
  }else{
    return false;
  }
}
 
void calculateSNR(){
  TFile* file = new TFile("./image_132_0_1000.root");

  TH2D* h_TOF   = (TH2D*)file->Get("himage_tof;1");
  TH2D* h_NoTOF = (TH2D*)file->Get("himage;1");

  const int i_fin=h_TOF->GetNbinsX();
  // cout << "Number of bins: " << i_fin << endl;

  Double_t sum_TOF; 
  Double_t sum_NoTOF; 
  Int_t nbins=0;
  for(int ix=1; ix<=i_fin; ix++){
    for(int iy=1; iy<=i_fin; iy++){
      if(IsROI(ix,iy,i_fin)) {
        sum_TOF  +=(h_TOF  ->GetBinContent(ix,iy));
        sum_NoTOF+=(h_NoTOF->GetBinContent(ix,iy));
        nbins++;
      }
    }
  }

  // cout << "sum with TOF: "    << sum_TOF << endl;
  // cout << "sum without TOF: " << sum_NoTOF << endl;
  Double_t mean_TOF   = sum_TOF  /(Double_t)nbins;
  Double_t mean_NoTOF = sum_NoTOF/(Double_t)nbins;
  cout << "mean with TOF: "    << mean_TOF << endl;
  cout << "mean without TOF: " << mean_NoTOF << endl;

  Double_t sd2_TOF;
  Double_t sd2_NoTOF;
  for(int ix=1; ix<=i_fin; ix++){
    for(int iy=1; iy<=i_fin; iy++){
      if(IsROI(ix,iy,i_fin)) {
        sd2_TOF   += pow((h_TOF  ->GetBinContent(ix,iy)-mean_TOF),  2);
        sd2_NoTOF += pow((h_NoTOF->GetBinContent(ix,iy)-mean_NoTOF),2);
      }
    }
  }
  // cout << "sd2 with TOF: " << sd2_TOF << endl;
  // cout << "sd2 without TOF: " << sd2_NoTOF << endl;
  Double_t sd_TOF  =sqrt(sd2_TOF  /(Double_t)nbins);
  Double_t sd_NoTOF=sqrt(sd2_NoTOF/(Double_t)nbins);
  cout << "sd with TOF: " << sd_TOF << endl;
  cout << "sd without TOF: " << sd_NoTOF << endl;
  Double_t snr_TOF  = mean_TOF  /sd_TOF;
  Double_t snr_NoTOF= mean_NoTOF/sd_NoTOF;
  cout << dROI << " cm diameter and placed along x axis centerd at " << per << endl; 
  cout << "SNR with TOF: " << snr_TOF << endl; 
  cout << "SNR without TOF: " << snr_NoTOF << endl; 
  cout << "SNR_TOF/SNR_NoTOF: " << snr_TOF/snr_NoTOF << endl;
}

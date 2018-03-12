#include <TFile.h>
#include <TH1.h>

#include <iostream>

using namespace std;

bool IsROI(const int ix, const int iy, const int i_fin) {
  const Double_t per = 0.8; // percentage
  const Double_t dROI = 3;  // diameter of ROI (mm)
  const Double_t dPET = 40; // diameter of PET (mm)
  Double_t thrX = 0.5*dPET*per;
  Double_t x = dPET/(i_fin*2)*ix;
  Double_t y = dPET/(i_fin*2)*iy;
  if(sqrt((x-thrX)*(x-thrX)+y*y)<dROI){
    // cout << "x: " << x << ", y: " << y << endl;
    return true;
  }else{
    return false;
  }
}

 
void calculateSNR(){
  const int i_fin=160;
  TFile* file = new TFile("./image_132_0_1000.root");

  TH2D* h_TOF   = (TH2D*)file->Get("himage_tof;1");
  TH2D* h_NoTOF = (TH2D*)file->Get("himage;1");

  cout << "Total number of bins X: " << h_TOF  ->GetNbinsX() << " Y: " << h_TOF  ->GetNbinsY() << endl;
  cout << "Total number of bins X: " << h_NoTOF->GetNbinsX() << " Y: " << h_NoTOF->GetNbinsY() << endl;
   
  Double_t sum_TOF; 
  Double_t sum_NoTOF; 
  for(int ix=-i_fin; ix<=i_fin; ix++){
    for(int iy=-i_fin; iy<=i_fin; iy++){
      if(IsROI(ix,iy,i_fin)) sum_TOF  +=(h_TOF  ->GetBinContent(ix,iy));
      if(IsROI(ix,iy,i_fin)) sum_NoTOF+=(h_NoTOF->GetBinContent(ix,iy));
    }
  }

  // cout << "sum with TOF: "    << sum_TOF << endl;
  // cout << "sum without TOF: " << sum_NoTOF << endl;
  Double_t mean_TOF   = sum_TOF  /(Double_t)(i_fin*i_fin);
  Double_t mean_NoTOF = sum_NoTOF/(Double_t)(i_fin*i_fin);
  // cout << "mean with TOF: "    << mean_TOF << endl;
  // cout << "mean without TOF: " << mean_NoTOF << endl;

  Double_t sd2_TOF;
  Double_t sd2_NoTOF;
  for(int ix=-i_fin; ix<=i_fin; ix++){
    for(int iy=-i_fin; iy<=i_fin; iy++){
      if(IsROI(ix,iy,i_fin)) sd2_TOF   += pow((h_TOF  ->GetBinContent(ix,iy)-mean_TOF),  2);
      if(IsROI(ix,iy,i_fin)) sd2_NoTOF += pow((h_NoTOF->GetBinContent(ix,iy)-mean_NoTOF),2);
    }
  }
  // cout << "sd2 with TOF: " << sd2_TOF << endl;
  // cout << "sd2 without TOF: " << sd2_NoTOF << endl;
  Double_t sd_TOF  =sqrt(sd2_TOF  /(Double_t)(i_fin*i_fin));
  Double_t sd_NoTOF=sqrt(sd2_NoTOF/(Double_t)(i_fin*i_fin));
  // cout << "sd with TOF: " << sd_TOF << endl;
  // cout << "sd without TOF: " << sd_NoTOF << endl;
  Double_t snr_TOF  = mean_TOF  /sd_TOF;
  Double_t snr_NoTOF= mean_NoTOF/sd_NoTOF;
  cout << "SNR with TOF: " << snr_TOF << endl; 
  cout << "SNR without TOF: " << snr_NoTOF << endl; 

  // cout << "SNR_TOF/SNR_NoTOF: " << snr_TOF/snr_NoTOF << endl;
}

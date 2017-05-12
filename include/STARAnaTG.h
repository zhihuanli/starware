/***********************************************************************************
***************************STARWARE CLASS HEADER FILE*******************************
Made by Byul Moon from Korea University
All functions are contained for STARWARE.
Last refine : 07.May.2017, beta ver.1.2
Copyright by B. Moon
***********************************************************************************/

#ifndef STARANATG_H
#define STARANATG_H

#include "TH1D.h"
#include "TCanvas.h"
#include "TString.h"
#include "TGraphErrors.h"
#include "STAR.h"


class STARAnaTG : public STAR
{
	private :

	public :
		TH1D* hist_N;
		TH1D* hist_TY;
		TGraphErrors* graph = new TGraphErrors();

		void Htimegate(Int_t &timeaxis1, Int_t &timeaxis2, Int_t &start, Int_t &end);
		void Hnetarea(TCanvas *tempcvs, TString &openFile);
		void Hnetarea2(TCanvas *tempcvs, TString &openFile, Int_t &tstart, Int_t &tend);
		void Htimegrow(TString &openFile, Int_t &timeaxis1, Int_t &timeaxis2, Int_t &peak);
};
#endif


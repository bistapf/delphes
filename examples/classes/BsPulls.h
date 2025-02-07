//
#ifndef G__BSPULLS_H
#define G__BSPULLS_H
//
#include <iostream>
#include <TH1.h>
#include <TCanvas.h>
#include <TStyle.h>
#include "external/TrackCovariance/VertexFit.h"
#include "external/TrackCovariance/VertexMore.h"
#include "examples/classes/VState.h"

//
// List all found vertices with given structure

class BsPulls{
	//
	// 
	// Author: F. Bedeschi, INFN-Pisa, Italy
	//  October 25, 2022
	//
private:
	// Ds vertex
	TH1D* h_DsXv;
	TH1D* h_DsYv;
	TH1D* h_DsZv;
	// Ds vertex momentum
	TH1D* h_DsPx;
	TH1D* h_DsPy;
	TH1D* h_DsPz;
	// Bs vertex
	TH1D* h_BsXv;
	TH1D* h_BsYv;
	TH1D* h_BsZv;
	// Bs vertex momentum
	TH1D* h_BsPx;
	TH1D* h_BsPy;
	TH1D* h_BsPz;
	// Bs mass
	TH1D* h_BsMass;
	TH1D* h_BsMerr;
	TH1D* h_BsMpull;
public:
	//
	// Constructors
	BsPulls();
	// Destructor
	~BsPulls();
	//
	//
	// Methods
	//
	void Fill(VState* BsState, VertexMore* vDs, VertexMore* vBs);
	void Print();
};

#endif

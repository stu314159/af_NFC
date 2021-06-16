#include "AFLattice.h"
#include <iostream>
#include <fstream>

using namespace af;

//constructor
AFLattice::AFLattice() : numSpd(19)
{
 
  afNFC_initialize();
}

// destructor
AFLattice::~AFLattice()
{

}

int AFLattice::afNFC_initialize()
{
  
  thisProblem.load_input();
  std::cout << "Problem Parameters Loaded. " << std::endl;
  
  nnodes = thisProblem.nx*thisProblem.ny*thisProblem.nz;
  std::cout << "nnodes: " << nnodes << std::endl;
  
  fEven = constant(0,nnodes,numSpd,f64);
  fOdd = constant(0,nnodes,numSpd,f64);
  SNL = constant(0,nnodes,s32);
  INL = constant(0,nnodes,s32);
  ONL = constant(0,nnodes,s32);
  
  // load the node types into SNL, INL and ONL
  // node types:
  // regular fluid node: 0
  // solid node: 1
  // velocity zm (inlet) node: 2
  // pressure zp (outlet) node: 3
  
  std::ifstream ndtype("ndType.lbm");
  int nt;
  int gNdInd = 0;
  
  while (ndtype >> nt)
  {
    switch (nt)
    {
      case 1 :
        SNL(gNdInd)=1;
        break;
      case 2 :
        INL(gNdInd) = 1;
        break;
      case 3 :
        ONL(gNdInd) = 1;
        break;    
    }
    
    ++gNdInd;
  
  }
  ndtype.close();
  
 
  return 0;
}

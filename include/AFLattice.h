#ifndef AFLATTICE_H
#define AFLATTICE_H

#include <arrayfire.h>
#include <af/cuda.h>

#include "Problem.h"

using namespace af;

class AFLattice
{
  public:
    Problem thisProblem;
    AFLattice();
    ~AFLattice();
  
  private:
    int afNFC_initialize();
    int nnodes;
    const int numSpd;
    array fEven;
    array fOdd;
    array SNL;
    array INL;
    array ONL;


};

#endif

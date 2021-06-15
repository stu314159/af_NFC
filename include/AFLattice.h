#ifndef AFLATTICE_H
#define AFLATTICE_H

#include <arrayfire.h>
#include <af/cuda.h>

#include "Problem.h"

class AFLattice
{
  public:
    Problem thisProblem;
    AFLattice();
    ~AFLattice();
  
  private:
    int afNFC_initialize();


};

#endif

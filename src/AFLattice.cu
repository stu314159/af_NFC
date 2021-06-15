#include "AFLattice.h"
#include <iostream>



//constructor
AFLattice::AFLattice()
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

  return 0;
}

#include <arrayfire.h>
#include <af/cuda.h>
#include <iostream>


//CUDA includes
#include <cuda_runtime.h>

// My Includes
#include "AFLattice.h"


using namespace af;
using namespace std;

int main(int argc, char** argv)
{
  cout << "Commencing afNFC execution. " << endl;
  af::info();
  
  AFLattice myLattice;
  
  return 0;
}

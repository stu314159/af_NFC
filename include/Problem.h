#ifndef PROBLEM_H
#define PROBLEM_H

// an object whose function is to read and hold the problem
// parameters for a tLBM simulation.

#include <string>


class Problem{

public:

  void load_input();
  
  // really just a structure, so make all members public

  std::string latticeType;  // [ "D3Q15" | "D3Q19" | "D3Q27" ]
  int dynamics; // [1 = LBGK | 2 = RBGK | 3 = MRT]
  int numTs;
  int tsRepFreq;
  int warmupTs; // number of timesteps to run prior to writing data to disk
  int plotFreq; // timesteps between data writes
  double cs;  // turbulence parameter
  double rhoLBM;
  double uLBM;
  double omega;
  int nx;  // lattice size in X,Y, and Z directions
  int ny;
  int nz;
  int restartFlag; // [0 = no re-start | 1 = re-start]
  int timeAvgFlag; // [0 = no time average | 1 = time average]
  double lx_p;  // physical lenght of domain in each dimension
  double ly_p;
  double lz_p;
  double tConvFact;  // conversion factors for time, length, and pressure
  double lConvFact;
  double pConvFact;
  int pRefIdx;   // node index for reference pressure
  int ssDataFlag;  // [0 = do not take subset data | 1 = take subset data ]


  private:

};
#endif

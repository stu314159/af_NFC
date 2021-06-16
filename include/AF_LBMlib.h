#ifndef AF_LBMLIB_H
#define AF_LBMLIB_H

void D3Q19_RegBC_LBGK(const double * fIn, double * fOut, const int * SNL, const int * VW_nl
                      const double VW_uz, const int * PE_nl, const double rho_out, const double omega,
                      const int Nx, const int Ny, const int Nz);


#endif

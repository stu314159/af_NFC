# af_NFC
A LBM-based Numeric Fluid Channel code with CUDA acceleration using ArrayFire

This code is not yet sufficiently developed to produce a result

When it is at a state of "functional" it will do the following:
1. D3Q19 lattice with LBGK dynamics on a brick-shaped domain.
2. Regularized velocity boundary conditions on the "west" and regularized pressure(density) boundary condition on the east.
3. execution will be on a single GPU using the ArrayFire library for data managing

Essentially this will satify the need to get a GPU-accelerated tool working quickly.  Longer term this will serve as a prototype for a larger and more flexible code.

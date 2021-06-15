cmake_minimum_required (VERSION 3.5)
enable_language(CUDA)
project(af_NFC VERSION 0.1 LANGUAGES CXX CUDA)


find_package(ArrayFire)
find_package(CUDA)
find_package(HDF5 REQUIRED COMPONENTS CXX)

add_executable(afNFCexec src/afNFC.cu)

target_compile_options(afNFCexec PUBLIC -Wall -Wextra -Wpedantic -std=c++11)

target_include_directories(afNFCexec PUBLIC include PRIVATE src ${ArrayFire_INCLUDE_DIRS} ${CUDA_INCLUDE_DIRS})

target_link_libraries(afNFCexec ${CUDA_LIBRARIES} ArrayFire::afcuda )

#include <iostream>
#include <string>
#include <omp.h>
#include <mpi.h>

int main ( int argc, char * argv[] ) {

  MPI_Init( &argc, &argv );

  int rank, npes;
  
  MPI_Comm_size( MPI_COMM_WORLD, &npes );
  MPI_Comm_rank( MPI_COMM_WORLD, &rank );
  
  int iam = 0, np = 1;
  
#pragma omp parallel private( iam, np )
  { // open OMP-parallel region
#if defined ( _OPENMP )
    np = omp_get_num_threads();
    iam = omp_get_thread_num();
#endif
    std::cout <<
      "Hello! I am thread " +
      std::to_string( iam ) + " of " +
      std::to_string( np )  + 
      " in the parallel world with rank " +
      std::to_string( rank ) + " of " +
      std::to_string( npes ) + "\n";
  } // close OMP-parallel region
    
  MPI_Finalize();

  return 0;

}

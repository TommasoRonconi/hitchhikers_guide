#include <iostream>
#include <string>
#include <mpi.h>

int main ( int argc, char * argv[] ) {

  int rank, npes;

  MPI_Init( &argc, &argv );
  MPI_Comm_size( MPI_COMM_WORLD, &npes );
  MPI_Comm_rank( MPI_COMM_WORLD, &rank );

  std::cout <<
    "Hello from rank " +
    std::to_string( rank ) + " of " +
    std::to_string( npes ) + "\n";
  
  MPI_Finalize();

  return 0;

}

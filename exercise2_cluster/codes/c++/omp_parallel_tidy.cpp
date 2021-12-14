#include <omp.h>
#include <string>
#include <iostream>

int main () {

  int iam = 0, np = 1;
#pragma omp parallel private( iam, np )
  {
#if defined ( _OPENMP )
    np  = omp_get_num_threads();
    iam = omp_get_thread_num();
#endif
    std::cout <<
      "Hello! I am thread " +
      std::to_string( iam ) + " of " +
      std::to_string( np )  + "\n";
  }
  
  return 0;

}

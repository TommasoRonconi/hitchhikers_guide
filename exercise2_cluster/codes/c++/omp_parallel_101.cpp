#include <omp.h>
#include <string>
#include <iostream>

int main () {

#pragma omp parallel
  {
    std::cout << "Hello! I have friends!!1!\n";
  }
  
  return 0;

}

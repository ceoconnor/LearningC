#include "matrices.h"
#include <stdio.h>

int main()
{
  MATRIX A = new(10, 10);
  printf("%Lf\n", get(&A, 2, 2));
  set(&A, 2, 2, 3.0);
  printf("%Lf\n", get(&A, 2, 2));
  return 0;
}  

#include <stdio.h>
#include "matrices.h"

int main(void) {

  // Construct a new 3x6 matrix
  MATRIX A = new_matrix(2,2);
  MATRIX B = new_matrix(2,2);
  MATRIX C;

  puts("Initial matrix:");
  print_matrix(&A);
  print_matrix(&B);

  puts("Modified matrix:");
  set(&A, 1, 1, 20.0);
  set(&A, 0, 0, 40.0);
  set(&A, 1, 0, 60.0);
  set(&A, 0, 1, 80.0);
  print_matrix(&A);
  
  set(&B, 0, 0, 20.0);
  set(&B, 1, 1, 40.0);
  set(&B, 0, 1, 60.0);
  set(&B, 1, 0, 80.0);
  print_matrix(&B);

  puts("Element A(0,0):");
  print_value(get(&A, 0, 0));
  puts("");
  puts("Element B(1,1):");
  print_value(get(&B, 1, 1));
  puts("");

  puts("Element A(0,1):");
  print_value(get(&A, 0, 1));
  puts("");
  puts("Element B(0,1):");
  print_value(get(&B, 0, 1));
  puts("");
 
  C=matprod(A, B);
  print_matrix(&C);

  // Destruct matrix when done
  delete_matrix(A);
  delete_matrix(B);
  delete_matrix(C);

  return 0;
}

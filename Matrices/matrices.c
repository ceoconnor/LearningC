#include <stdio.h>
#include <stdlib.h>

typedef struct Matrix{ unsigned int rows; unsigned int cols; long double *mat; }MATRIX;

MATRIX matprod ( MATRIX, MATRIX );

void set ( MATRIX *m, int i, int j, long double val )
{
  *(m->mat + m->rows + i + j) = val;
}

long double get ( MATRIX *m, int i, int j )
{
  return *(m->mat + m->rows * i + j);
}

MATRIX new ( unsigned int rows, unsigned int cols )
{
  MATRIX A;
  A.rows = rows;
  A.cols = cols;
  A.mat = (long double *) calloc(A.rows * A.cols, sizeof(long double));
  return A;
}


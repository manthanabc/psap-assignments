#include <stdio.h>

int main() {
  float a[100][100];
  float b[100][100];
  float c[100][100];

  int rowsA, colsA, rowsB, colsB;
  printf("Enter dimention of A: ");
  scanf("%d %d", &rowsA, &colsA);
  printf("Enter cols of B: ");
  scanf("%d", &colsB);
  rowsB = colsA;

  int colsC = colsB;
  int rowsC = rowsA;

  // Get a
  printf("Give elements of matrix a\n");
  for(int i=0; i< rowsA; i++) {
    for(int j=0; j<colsA; j++) {
      printf("Give A %d %d: ", i+1, j+1);
      scanf("%f", &a[i][j]);
    }
  }
  // Get b
  printf("Give elements of matrix b\n");
  for(int i=0; i< rowsB; i++) {
    for(int j=0; j<colsB; j++) {
      printf("Give B %d %d: ", i+1, j+1);
      scanf("%f", &b[i][j]);
    }
  }
  for(int i=0; i< rowsA; i++) {
    for(int j=0; j<colsB; j++) {
      c[i][j] = 0;
      for(int k=0; k<rowsB; k++)
        c[i][j] += a[i][k] * b[k][j];
      }
  }
  
  for(int i=0; i< rowsC; i++) {
    for(int j=0; j<colsC; j++)
      printf(" %9.2f", c[i][j]);
    printf("\n");
    }
}

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int contains(int* gt, int len, int num) {
  for(int f=0; f<len; f++) 
    if(gt[f] == num)
      return 0;
  return 1;
}


int main() {

  long int g, sum=0;
  scanf("%ld", &g);
  long int gh;

  for(int f=0; f< g-1; f++) { 
    scanf("%ld", &gh);
    sum += gh;  
  }

  printf("%ld", (g*(g+1)/2)-sum);
}

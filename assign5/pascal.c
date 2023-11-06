#include <stdio.h>


int fact(int a) {
  int fact=1;
  while(a)
  fact *=a--;
  return fact;
}

int main() {
  char height;
  int line=1;
  printf("Enter the height : ");
  scanf("%d", &height);
  
  for(int h=0; h<height; h++) {
    int pe = height-h+1;
    while(pe--) printf("  ");
    int p = h;
    while(p--) printf("%3d ", fact(h-1)/(fact(h-p-1)*fact(p)) );
    printf("\n");
  }
}

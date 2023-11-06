#include <stdio.h>

int main() {
  char height;
  int counter=0;
  printf("Enter the height : ");
  scanf("%d", &height);

  int sign=-2;
  while(sign++) {
    for(int h=0; h<height-1-sign; h++) {
      int pe = (sign) ? height-h+1 : h+3;
      while(pe--) printf("  ");
      int p = (sign) ? h*2+1 : (height-1-h)*2-1;
      while(p--) printf("%d ", (++counter)%10);
      printf("\n");
    }
  }
}

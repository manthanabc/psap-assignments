#include <stdio.h>

int main() {
  char height;
  printf("Enter the height : ");
  scanf("%d", &height);
  
  for(int h=0; h<height; h++) {
    int pe = height-h+1;
    while(pe--) printf("  ");
    int p = h*2+1;
    while(p--) printf("%c ", 65+h);
    printf("\n");
  }
}

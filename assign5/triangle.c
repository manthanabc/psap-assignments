#include <stdio.h>

int main() {
  char height, ch;
  printf("Enter the height : ");
  scanf("%d", &height);
  
  printf("Enter the character to use : ");
  scanf("\n%c", &ch);

  for(int h=0; h<=height; h++) {
    int p = h;
    while(p--) printf("%c ", ch);
    printf("\n");
  }
}

#include <stdio.h>

int main() {
  printf("Input: ");
  int a, b, k;
  scanf("%d %d %d", &a, &b, &k);
  printf("Output %s", ((!(k%a)||!(k%b))&&(k<a*b)&&k!=0)?"YES" : "NO");
  return 0;
}
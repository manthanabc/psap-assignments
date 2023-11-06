#include <stdio.h>

int main() {
  double gh[] = { 1, 2, 3};
  int size = sizeof(gh) / sizeof(gh[0]);
  int min = 0;
  while(size) min = (gh[--size] > min)? gh[size]: min;
  printf("%d", min);
}

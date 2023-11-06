#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void get_cell(int* b) {
  scanf("%d", b);
  if(*b>8 || *b<1) { printf("Invalid input"); exit(1); }
}

bool king(int x1, int y1, int x2, int y2) {
  return abs(x1-x2)<2 && abs(y1-y2)<2;
}

bool knight(int x1, int y1, int x2, int y2) {
  int c1= (abs(x1-x2)==2 && abs(y1-y2)==1);
  int c2= (abs(x1-x2)==1 && abs(y1-y2)==2);

  return c1||c2;
}

bool rook(int x1, int y1, int x2, int y2) {
  return (x1 == x2) || (y1 == y2);
}

bool bishop(int x1, int y1, int x2, int y2) {
  return abs(x1-x2) == abs(y1-y2);
}

bool queen(int x1, int y1, int x2, int y2) {
  bool c1 = bishop(x1, y1, x2, y2);
  bool c2 = rook(x1, y1, x2, y2);  
  bool c3 = king(x1, y1, x2, y2);
  
  return c1||c2||c3;
}

int main() {
  int mvs[4] = {0};
  for(int i=0; i< 4; i++)
    get_cell(&mvs[i]);
  
  printf("%s", queen(mvs[0], mvs[1], mvs[2], mvs[3])?"YES":"NO");
}

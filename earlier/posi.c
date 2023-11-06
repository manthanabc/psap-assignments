#include <stdio.h>
int main() {
  int len;
 
  scanf("%d", &len);
  int negative[len];
  int positive[len];

  int nnegative=0;
  int npositive=0;

  for(int i=0; i< len; i++ ) {
    int num;
    scanf("%d", &num);
    if(num>0) negative[nnegative++] = num ;
    else positive[npositive++] = num;
  }

  for(int i=0; i< len; i++) {
    if(i%2==0 && i/2 < npositive) printf("%d ", positive[i/2]);
    if(i%2==1 && (i-1)/2 < nnegative) printf("%d " , negative[(i-1)/2]);
  }
}

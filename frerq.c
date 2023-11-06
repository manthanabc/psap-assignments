#include <stdio.h>

int main() {
  int num[]= {1,2,3,4,15};
  int freq[10] = { 0 };

  for(int i=0; i< 5; i++)
   freq[num[i]/10]++;
  
  for(int i=0; i< 10; i++)
    printf("Numbers between %3d and %3d are %3d\n", i*10, (i+1)*10, freq[i]);
}

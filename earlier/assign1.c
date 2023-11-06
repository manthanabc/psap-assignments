#include <stdio.h>

int main() {
  int maths, sci, eng, avg;

  printf("\nEnter marks in Maths :");
  scanf("%d", &maths);
  printf("\nEnter marks in Science :");
  scanf("%d", &sci);
  printf("\nEnter marks in English :");
  scanf("%d", &eng);

  if((maths > 100) || (maths < 0)) {
    printf("Invalid marks in math");
    return 1;
  } else if((sci > 100) || (sci < 0)) {
    printf("Invalid marks in sci");
    return 1;
  } else if((eng > 100) || (eng < 0)) {
    printf("Invalid marks in English");
    return 1;
  }

  avg = sci + eng + maths;
  avg = avg / 3;
  printf("\nAverage is %d", avg);

  if(avg > 80)
    printf("\nA grade");
  else if(avg > 60)
    printf("\nB grade");
  else if(avg > 50)
    printf("\nC grade");
  else if(avg >= 40)
    printf("\nD grade");
  else if(avg < 40)
    printf("\nFailed");

  return 0;
}

#include <stdio.h>

// #include <malloc.h>
// int main() {
//   int length=0, mx =0, len =0;
//   int* buffer=malloc(100*4);
//   do scanf("%d", buffer+length); while(buffer[length++] != 0);
//   while(*(buffer++) != 0) len = (*(buffer) ==*(buffer-1))? ++len, mx = (mx>len)?mx:len : 0;     
//   printf("%d", mx+1);  
// }

int main() {
  int num =0, num_prev=-1, streak = 0, streak_max=0;
  // scanf("%d", &num);
  // num_prev = num;
  while(num != 0){
     streak = (num==num_prev)? ++streak: 1; 
     streak_max = (streak>streak_max)? streak: streak_max;
     num_prev = num;
     scanf("%d", &num);
  } 
  printf("%d", streak_max);
}

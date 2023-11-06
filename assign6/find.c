#include <stdio.h>

int main() {
  char string[100], subs[100];
  printf("Enter a string: ");
  gets(string);

  printf("\nEnter the substring you wish to find: ");
  gets(subs);

  int index = 0;
  int len=0;
  int i=0;
  int found=0;
  while(string[i]) {
    while(subs[len]) {
      char stringc = string[len+index];
      if (stringc>'A' && stringc<'Z'){ 
        stringc+='a'-'A';
      }
      char subc = subs[len];
      if (subc>'A' && subc<'Z')
      {
          subc+='a'-'A';
      }
      if (stringc == 0) {
         len = 0;
         break; 
      }
      if(subc == stringc){
         len++;
      } else {
         len=0;
         break; 
      }
      
    }
    if(len){
        found=1;
        break;
    }
    index++;
    i++;
  }
  if (found) {
    printf("%d", index);  
  } else {
    printf("%d", -1);
  }
}


#include <stdio.h>

int main() {
  char string[100], subs[100];
  printf("Enter a string: ");
  gets(string);

  printf("\nEnter the substring you wish to find: ");
  gets(subs);

  int index = -1;
  int len=0;
  while(string[index+1]) {
    while(subs[len]) {

      //  Change to lowercase
      char stringc = string[len+index+1];
      if (stringc>'A' && stringc<'Z') stringc+='a'-'A';
      char subc = subs[len];
      if (subc>'A' && subc<'Z') subc+='a'-'A';
  
      if (stringc == 0) { len = 0; break; }
      if(subc == stringc) len++;
      else { len=0; break; }
      
    }
    if(len) break;
    index++;
  }
  printf("%d", (len)?index+1:-1);
}
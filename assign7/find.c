#include <stdio.h>
#include <string.h>

int main() {
  char string[100], subs[100];
  printf("Enter a string: ");
  gets(string);

  printf("\nEnter the substring you wish to find: ");
  gets(subs);

  int dir;
  printf("\nEnter direction of search (0/1): ");
  scanf("%d", &dir);

  int oc;
  printf("\nEnter the ocrance you want to find: ");
  scanf("%d", &oc);

  int index;
  int len=0;
  int length=strlen(string);

  for(int i=(dir)?length-1:0; ((!dir)&&(i<length))||(dir&&(i>=0)); (dir)?i--:i++) {
    while(subs[len]) {
      char stringc = string[len+i];
      char subc = subs[len];

      if (stringc == 0) { len = 0; break; }
      if((subc|32) == (stringc|32)) len++;
      else { len=0; break; }
    }
    index=i;
    if(len&&!(--ocrance)) break;
    len=0;
  }
  printf("%d", (len)?index:-1);
}
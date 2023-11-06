#include <stdio.h>
#include <string.h>

int main() {
  char students[72][100] = {"MATHAN_PATIL", "MOHIT_BADGUGAR", "MANDAR_PATIL", "NIKHIL_PATIL"};
  char search_term[100];
  gets(search_term);
  for(int i=0; i< 72; i++) {
    int found =1;
    for(int j=0; j<strlen(search_term); j++) {
      if(students[i][j]==0) found=0;
      if(tolower(students[i][j]) != tolower(search_term[j])) found=0;
    }
    if(found) printf("Name: %s, Roll No: %d\n", students[i], i+1);
  }
  return 0;
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char students[111][50] = {
        "Atharva",
        "Aditya PATIL",
        "Aditya PAtil",
        "Jagdeep",
        "Jai",
        "Nikhil"
    };

    char searchChar[50];
    printf("Enter the starting character of the name: ");
    scanf("%s", searchChar);
    for (int i = 0; i <= 50; ++i) {
        for(int j=0; j<strlen(searchChar); j++) {
        if (tolower(students[i][j]) == tolower(searchChar[j])) {
            printf("Roll Number: %d, Name: %s\n", i+1, students[i]);
        }
      }
    }

    return 0;
}
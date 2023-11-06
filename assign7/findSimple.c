#include <stdio.h>
#include <string.h>

int main() {
    char mainString[100], subString[100];
    int direction, occurrence;

    // Input main string
    printf("Enter the main string: ");
    gets(mainString);

    // Input substring to search
    printf("Enter the substring to search: ");
    gets(subString);

    // Convert both strings to lowercase for case-insensitive search
    for (int i = 0; mainString[i]; ++i) {
        mainString[i] = tolower(mainString[i]);
    }
    for (int i = 0; subString[i]; ++i) {
        subString[i] = tolower(subString[i]);
    }

    // Input search direction and occurrence number
    printf("Enter search direction (0 for left to right, 1 for right to left): ");
    scanf("%d", &direction);
    printf("Enter occurrence number: ");
    scanf("%d", &occurrence);

    int mainLen = strlen(mainString);
    int subLen = strlen(subString);
    int count = 0, index = -1;

    if (direction == 0) {
        // Search from left to right
        for (int i = 0; i <= mainLen - subLen; ++i) {
            if (strncmp(mainString + i, subString, subLen) == 0) {
                count++;
                if (count == occurrence) {
                    index = i;
                    break;
                }
            }
        }
    } else if (direction == 1) {
        // Search from right to left
        for (int i = mainLen - subLen; i >= 0; --i) {
            if (strncmp(mainString + i, subString, subLen) == 0) {
                count++;
                if (count == occurrence) {
                    index = i;
                    break;
                }
            }
        }
    }

    // Output the result
    if (index != -1) {
        printf("Substring found at index: %d\n", index);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}
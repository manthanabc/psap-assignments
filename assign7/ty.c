#include <stdio.h>
#include <string.h>

int main() {
    char main[100], sub[100];
    int dir, oc;

    // Input main string
    printf("Enter the main string: ");
    gets(main);

    // Input substring to search
    printf("Enter the substring to search: ");
    gets(sub);

    // Convert both strings to lowercase for case-insensitive search
    for (int i = 0; main[i]; ++i) {
        main[i] = tolower(main[i]);
    }
    for (int i = 0; sub[i]; ++i) {
        sub[i] = tolower(sub[i]);
    }

    // Input search direction and occurrence number
    printf("Enter search direction (0 for left to right, 1 for right to left): ");
    scanf("%d", &dir);
    printf("Enter occurrence number: ");
    scanf("%d", &oc);

    int mainLen = strlen(main);
    int subLen = strlen(sub);
    int count = 0, index = -1;

    if (dir == 0) {
        // Search from left to right
        for (int i = 0; i <= mainLen - subLen; ++i) {
            if (strncmp(main + i, sub, subLen) == 0) {
                count++;
                if (count == oc) {
                    index = i;
                    break;
                }
            }
        }
    } else if (dir == 1) {
        // Search from right to left
        for (int i = mainLen - subLen; i >= 0; --i) {
            if (strncmp(main + i, sub, subLen) == 0) {
                count++;
                if (count == oc) {
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
    }}

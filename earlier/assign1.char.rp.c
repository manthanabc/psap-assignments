#include <stdio.h>                                   

void get_marks(char*, int*);

int main() {
        int math, sci, eng, avg;

        get_marks("Math", &math);
        get_marks("Science", &sci);
        get_marks("English", &eng);
        
        avg = (math + sci + eng) /3;
        if(avg <= 40)
                printf("You failed");
        else
                printf("\nGrade is %c", (char)('A'+4-(float)(avg-40)*0.0666));
        return 0;
}

void get_marks(char* sub, int* loc) {
        printf("Enter marks in %s: ", sub);
        scanf("%d", loc);
        if((*loc > 100) || (*loc <0)) {
                printf("Invalid Input");
                exit(1);
        }
}

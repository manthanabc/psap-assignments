#include <stdio.h>

int main() {
        int a,b; float r;
        char d;

        printf("Enter two numbers:");
        scanf("%d %d", &a, &b);
        getchar();

        printf("Enter + for addition\nEnter - for substraction\nEnter * for multiplication\nEnter / for division\n");
        scanf("%c", &d);

        if(d == '+')
                r = a + b;
        else if(d == '-')
                r = a - b;
        else if(d == '*')
                r = a*b;
        else if(d == '/')
                r = (float)a/b;

        printf("Result is %f\n", r);
        return 0;
}
// Program for basic four operations
#include <stdio.h>

int main() {
  int num1, num2, op;

  printf("Enter two numbers :");
  scanf("%d %d", &num1, &num2);

  printf("Enter 1 for Addition \nEnter 2 for Substraction \nEnter 3 for multiplication \nEnter 4 for division");
  scanf("%d", &op);

  if(op == 1) {
    int add = num1 + num2;
    printf("\nAddition is %d", add);
  } else if(op == 2) {
    int sub = num1 - num2;
    printf("\nSubstration is %d", sub);
  } else if(op == 3) {
    int mul = num1 * num2;
    printf("\nMultiplication is %d", mul);
  } else if(op == 4) {
    int div = num1 / num2;
    printf("\nDivision is %d", div);
  } else {
    printf("\nInvalid input");
  }

  return 0;
}

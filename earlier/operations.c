// Program for basic four operations
#include <stdio.h>

int main() {
  int num1, num2, result;

  printf("Enter two numbers :");
  scanf("%d %d", &num1, &num2);

  int add = num1 + num2;
  printf("\nAddition is %d", add);
  
  int sub = num1 - num2;
  printf("\nSubstration is %d", sub);

  int mul = num1 * num2;
  printf("\nMultiplication is %d", mul);

  int div = num1 / num2;
  printf("\nDivision is %d", div);

  return 0;
}

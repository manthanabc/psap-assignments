#include <stdio.h>

int main() {
  float amount, intrst, emi=0, sum_intrst, stnding;
  int index=1;
  
  printf("This program will give you complete chart of repayment of loan\n\nGive loan amount :");
  scanf("%f", &amount);
  stnding = amount;
  
  printf("\nGive rate of Interest (per year per hundred) : ");
  scanf("%f", &intrst);
  intrst/=1200;

  printf("\nGive EMI : ");
  scanf("%f", &emi);
  while(emi < amount*intrst) {
    printf("You will not be able to repay loan with this EMI\n");
    printf("Increase  amount (More than %.2f)\nGive EMI : ", amount*intrst);
    scanf("%f", &emi);
  }

  int n=120;  while(n--) printf("=");
  printf("\nLoan amount = %.2f ROI = %.2f EMI = %.2f\n", amount, intrst*100, emi);
  n=120;  while(n--) printf("-");
  
  printf("\n\tMonth no\tPrincipal\tInterest\t    Total\t     EMI\tOutstanding\n");
  while(amount>0) {
    float total = amount*(1+intrst);
    emi = emi<total?emi:total;
    sum_intrst+=intrst*amount;
    printf("\t%8d\t%9.2f\t%8.2f\t%9.2f\t%8.2f\t%8.2f\t\n", index++, amount, intrst*amount, total, emi, amount=total-emi);
  }
  n=120;  while(n--) printf("-");
  printf("Total Interest paid: %.2f\n", sum_intrst);
  n=120;  while(n--) printf("=");
}
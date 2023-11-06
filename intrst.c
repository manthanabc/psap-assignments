#include <stdio.h>
int main(){
    int a,b,c;
    printf("Give Loan Amount: ");
    scanf("%d",&a);
    printf("Give Rate Of Intrest (per year per 100) : ");
    scanf("%d",&b);
    printf("Give EMI: ");
    scanf("%d",&c);
    if ((a/100)>=c){
        printf("You will not be able to repay your amount with this EMI. Please increase amount (More than %d)",a/100);
    }
    else{
        printf("Month\t Principal\t Intrest\t Total\t EMI\t OUTSTANDING\t \n");
        int m=1,p=a,i=(b/12)*(p/100),t=p+i,e=c,o=t-e;
        while(o>0){
            t=p+i;
            o=t-e;
            printf("%5d\t %5d\t %5d\t %5d\t %5d\t %5d\t \n",m,p,i,t,e,o);
            m++;
            p=o;
            i=(p/100)*(b/12);
            if(o<e){
                t=p+i;
                e=t;
                o=0;
                printf("%5d\t %5d\t %5d\t %5d\t %5d\t %5d\t \n",m,p,i,t,e,o);
            }
        }
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int dif(int d, int e)
{
    if(d<e)
    {
        return e-d;
    }
    else
    {
        return 10-e+d;
    }
}
void solve(int a)
{
      int b=a;
      int c;
      int d,sum=0,e;  
    for (int i = 0; a!=0; i++)
    {
        c=a%10;
        a=a/10;
        printf("%d %d\n",c,a);
        if(c==1)
        {
            sum++;
            continue;
        }
        if(i==0)
        {
         d=1;
        }
        e=c;
        printf("%d\n",dif(d,e));
        sum+=dif(d,e);
        d=c;
        printf("sec : %d  d : %d\n",sum,d);
    }
  printf("%d\n",sum);
}

int main()
{
     int n;
     scanf("%d", &n);
     for (int i = 0; i < n; i++)
     {
        int a;
        scanf("%d", &a);
        solve(a);
       }

       return 0;
}
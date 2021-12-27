#include<stdio.h>
main()
{
     int n,sum=0,d,square=0;
     printf("ENTER NUMBER:");
     scanf("%d",&n);
     while(n!=0)
     {
         d=n%10;
         square=d*d;
         sum+=square;
         n=n/10;
     }
     printf("SUM OF SQUARES OF DIGITS OF GIVEN NUMBER=%d",sum);
}

//SUM OF DIGITS OF A GIVEN NUMBER
#include<stdio.h>
main()
{
	int n,d,sum=0;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		sum+=d;
		n=n/10;		
	}
	printf("SUM OF DIGITS=%d",sum);
}

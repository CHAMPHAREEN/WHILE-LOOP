//SUM OF MULTIPLES OF 5 IN THE RANGE [a,b]
#include<stdio.h>
main()
{
	int a,b,c,sum=0;
	printf("ENTER VALUES FOR a AND b:");
	scanf("%d %d",&a,&b);
	c=a;
	while(a<=b)
	{
		if(a%5==0)
		{
		    sum+=a;
		}
		a++;
	}
	printf("SUM OF MULTIPLES OF 5 IN THE RANGE [%d %d]=%d",c,b,sum);
}

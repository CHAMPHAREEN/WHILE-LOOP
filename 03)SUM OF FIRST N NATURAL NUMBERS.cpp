//SUM OF FIRST N NATURAL NUMBERS
#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	printf("ENTER VALUE OF n:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("SUM=%d",sum);
}

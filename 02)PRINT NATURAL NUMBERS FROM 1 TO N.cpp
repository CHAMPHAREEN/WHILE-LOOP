//PRINT NATURAL NUMBERS FROM 1 TO N
#include<stdio.h>
main()
{
	int i=1,n;
	printf("ENTER VALUE OF N:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
}

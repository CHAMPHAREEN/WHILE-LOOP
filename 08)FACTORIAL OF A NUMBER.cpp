#include<stdio.h>
main()
{
	int i=1,n,fact=1;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
	    i++;
	}
	printf("FACTORIAL OF %d = %d",n,fact);
}

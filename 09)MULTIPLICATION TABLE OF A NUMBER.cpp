#include<stdio.h>
main()
{
	int i=0,n;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	while(i<=20)
	{
		printf("%2d x %2d = %3d\n",n,i,n*i);
		i++;
	}
}

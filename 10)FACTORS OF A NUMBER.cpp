#include<stdio.h>
main()
{
	int i=1,n;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0)
		printf("%d\n",i);
	    i++;
	}
}

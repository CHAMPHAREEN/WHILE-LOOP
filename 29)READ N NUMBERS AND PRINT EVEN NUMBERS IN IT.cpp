//READ N NUMBERS AND PRINT EVEN NUMBERS IN IT
#include<stdio.h>
main()
{
	int n,a,i;
	printf("ENTER THE NUMBER OF NUMBERS TO BE ENTERED:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("NUMBER%d=",i);
		scanf("%d",&a);
		if(a%2==0)
		{
			printf("----THIS IS AN EVEN NUMBER\n");
		}
	}
	
}


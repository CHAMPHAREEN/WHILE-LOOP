//READ VALUES FOR A AND B AND PRINT EVEN NUMBERS BETWEEN A AND B
#include<stdio.h>
main()
{
	int a,b;
	printf("ENTER VALUES FOR a AND b:");
	scanf("%d%d",&a,&b);
	a=++a;
	while(a<b)
	{
		if(a%2==0)
		  printf("%d\n",a);
		a++;  
	}
}

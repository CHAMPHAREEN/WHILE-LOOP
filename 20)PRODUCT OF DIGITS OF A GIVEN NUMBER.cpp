//PRODUCT OF DIGITS OF A GIVEN NUMBER
#include<stdio.h>
main()
{
	int n,d,product=1;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		product*=d;
		n=n/10;		
	}
	printf("PRODUCT OF DIGITS=%d",product);
}

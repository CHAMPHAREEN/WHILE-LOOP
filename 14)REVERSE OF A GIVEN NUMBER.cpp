//REVERSE OF A GIVEN NUMBER
#include<stdio.h>
main()
{
	int n,d,rev=0;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;		
	}
	printf("REVERSE OF GIVEN NUMBER=%d",rev);
}

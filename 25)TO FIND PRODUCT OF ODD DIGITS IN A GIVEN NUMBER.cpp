//TO FIND PRODUCT OF ODD DIGITS IN A GIVEN NUMBER
#include<stdio.h>
main()
{
	int num,d,p=1,c;
	printf("ENTER NUMBER:");
	scanf("%d",&num);
	c=num;
	while(num!=0)
	{
		d=num%10;
		if(d%2!=0)
		{
			p=p*d;
		}
		num=num/10;
	}
	printf("PRODUCT OF ODD DIGITS IN %d=%d",c,p);
}

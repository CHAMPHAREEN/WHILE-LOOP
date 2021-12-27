//TO CHECK IF GIVEN NUMBER IS PALINDROME OR NOT
#include<stdio.h>
main()
{
	int n,num,d,rev=0;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;		
	}
	if(rev==num)
	   printf("PALINDROME");
	else
	   printf("NOT A PALINDROME");
}

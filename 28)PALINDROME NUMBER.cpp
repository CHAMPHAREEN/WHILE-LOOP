//PALINDROME NUMBER
#include<stdio.h>
main()
{
	int num,rev=0,digit,c;
	printf("ENTER NUMBER:");
	scanf("%d",&num);
	c=num;
	while(num!=0)
	{
		digit=num%10;
		rev=rev*10+digit;
		num=num/10;
	}
	if(rev==c)
	{
		printf("%d IS A PALINDROME NUMBER",c);
	}
	else
	{
		printf("%d IS NOT A PLAINDROME NUMBER",c);
	}
}


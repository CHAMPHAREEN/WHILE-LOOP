//SWAP THE FIRST AND LAST DIGITS OF THE NUMBER AND PRINT THE NUMBER
#include<stdio.h>
main()
{
	int num,ld,newnum,digit,rev=0,fd,newnum2,rev2=0,digit2;
	printf("ENTER NUMBER:");
	scanf("%d",&num);
	ld=num%10;
	newnum=num/10;
	while(newnum!=0)
	{
		digit=newnum%10;
		rev=rev*10+digit;
		newnum=newnum/10;
		}
     fd=rev%10;
	 newnum2=rev/10;
	 while(newnum2!=0)
	 {
	 	 digit2=newnum2%10;
	 	 rev2=rev2*10+digit2;
	 	 newnum2=newnum2/10;
	 	 					 }
	printf("%d AFTER SWAPPING FIRST AND LAST DIGIT=%d%d%d",num,ld,rev2,fd); 	 					 
							   		                
}

#include<stdio.h>
#include<stdlib.h>
main()
{
	int i=1,n,choice;
	printf("TAKE NUMBER AND CHOICE FROM USER\nIF CHOICE IS 1 DISPLAY ODD NUMBERS FROM 1 TO N \nIF CHOICE IS 2 DISPLAY EVEN NUMBERS FROM 1 TO N \nIF CHOICE IS 3 DISPLAY FACTORS OF NUMBER N \nIF CHOICE IS 4 EXIT THE PROGRAM");
	printf("\nENTER NUMBER AND CHOICE:");
	scanf("%d%d",&n,&choice);
	if(choice==1)
	{
		while(i<=n)
		{
			if(i%2!=0)
			{
				printf("%d\n",i);
			}
		   i++;	
		}
	}
    else if(choice==2)
	{
		while(i<=n)
		{
			if(i%2==0)
			{
				printf("%d\n",i);
			}
		   i++;	
		}
	}
	else if(choice==3)
	{
		while(i<=n/2)
		{
			if(n%i==0)
			{
				printf("%d\n",i);
			}
		   i++;	
		}
	}
   else if(choice==4)
   {
       exit(0);
   }
      return(0);
}

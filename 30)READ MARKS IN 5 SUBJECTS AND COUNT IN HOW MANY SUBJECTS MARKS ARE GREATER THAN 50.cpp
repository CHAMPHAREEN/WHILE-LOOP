//READ MARKS IN 5 SUBJECTS AND COUNT IN HOW MANY SUBJECTS MARKS ARE GREATER THAN 50
#include<stdio.h>
main()
{
	int marks,i,count=0;
	printf("ENTER THE MARKS:\n");

	for(i=1;i<=5;i++)
	{
		printf("SUBJECT%d=",i);
		scanf("%d",&marks);
		if(marks>=50)
		{
			count++;
		}
	}
	printf("SUBJECTS IN WHICH THE STUDENT SCORED MORE THAN 50 MARKS=%d",count++);
}
	

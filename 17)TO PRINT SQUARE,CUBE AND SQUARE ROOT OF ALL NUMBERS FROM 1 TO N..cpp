//TO PRINT SQUARE,CUBE AND SQUARE ROOT OF ALL NUMBERS FROM 1 TO N.
#include<stdio.h>
#include<math.h>
main()
{
	int n,i=1,sq,cu;
	float sqr;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	printf("NUMBER     SQUARE      CUBE     SQUARE ROOT\n");
	while(i<=n)
	{
		sq=i*i;
		cu=i*i*i;
		sqr=sqrt(i);
        printf("%5d      %5d      %5d      %5.2f\n",i,sq,cu,sqr);
	        i++;
	}
}

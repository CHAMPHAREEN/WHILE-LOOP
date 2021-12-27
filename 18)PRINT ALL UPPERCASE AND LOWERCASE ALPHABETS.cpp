////PROGRAM TO PRINT ALL UPPERCASE AND LOWERCASE ALPHABETS
#include<stdio.h>
main()
{
	int i=65;
    printf("UPPERCASE LETTERS ARE:\n");	
	while(i<91)
	{
		printf("%c ",i);
		i++;
	}
	i=97;
	printf("\nLOWERCASE LETTERS ARE:\n");
	while(i<123)
  {   
	   printf("%c ",i);
	   i++;
  }   	
}

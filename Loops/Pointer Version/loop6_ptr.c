/* purpose : merge two array */

#include <stdio.h>
#include <conio.h>

void main()
{

	char a[100], b[100], c[200],  *p, *q, *mer;

	p=a;
	q=b;
	mer=c;

	printf("enter text 1\n");

	scanf("%c",p);

	while(*p!='$')   
    

	{
		
		p++;

		scanf("%c",p);

		
	}

	*p='\0';

	fflush(stdin);
	printf("enter text 2\n");

	scanf("%c",q);

	while(*q!='$')   
    

	{
		
		q++;

		scanf("%c",q);

		
	}

	*q='\0';




	p=a;

	while(*p) 
	{
		
	
	    *mer=*p;
	 	mer++;
		p++;
		
		
	}

	q=b;

	while(*q) 
	{
		
	
	    *mer=*q;
	 	mer++;
		q++;
		
		
	}


	*mer='\0';

	printf("Merged Array..\n");	

	mer=c;

	while(*mer!='\0') 
	{
		
		printf("%c", *mer);
		mer++;
		
	}


	getch();

}
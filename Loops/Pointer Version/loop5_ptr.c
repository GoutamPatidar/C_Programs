/* purpose : copy first N characters  */

#include <stdio.h>

#include <conio.h>

void main()
{

	char a[100], b[100],  *p, *q;

	int n,i ; 

	p=a;
	q=b;

	printf("enter text\n");

	scanf("%c",p);

	while(*p!='$')   
    

	{
		
		p++;

		scanf("%c",p);

		
	}

	*p='\0';


	printf("Enter how many characters do u want copy ...\n");
	scanf("%d", &n);

	p=a;
	i=0;
	while(*p!='\0' && i<n) 
	{
		
		*q=*p;
		p++;
		q++;
		i++;
	}

	*q='\0';

	printf("copied Array..\n");	

	q=b;

	while(*q!='\0') 
	{
		
		printf("%c", *q);
		q++;
		
	}


	getch();


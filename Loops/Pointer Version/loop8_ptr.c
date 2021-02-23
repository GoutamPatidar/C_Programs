/* purpose : count lines in the given text */

#include <stdio.h>
#include <conio.h>

void main()
{

	char a[100], *p;

	int lines=0;

	p=a;

	printf("enter text\n");

	scanf("%c",p);

	while(*p!='$')   
    

	{
		
		p++;

		scanf("%c",p);

		
	}

	*p='\0';

	p=a;

	while(*p!='\0') 
	{
		
		if(*p=='\n')
			lines++;
		p++;
	
	}

    if(*(p-1)!='\n') 
		lines++;

	printf("Lines            : %d\n", lines);	

	getch();

}
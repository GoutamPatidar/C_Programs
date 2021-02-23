/* purpose : count lines in the given text*/

#include <stdio.h>

#include <conio.h>

void main()
{

	char ch[1000];

	int loop=0,count=0;
	
  	printf("enter string\n");

   

	scanf("%c",&ch[loop]);

	while(ch[loop]!='$')

	{
		
		loop++;

		
		scanf("%c",&ch[loop]);

		
	}

     ch[loop]='\0';


	 
    loop=0;

	while(ch[loop]!='\0')
	{
	
        if(ch[loop]=='\n')
			 count++;

		
			    loop++;    
	
	}

	
   printf("no of lines :  %d", count);
    
	getch();

} 
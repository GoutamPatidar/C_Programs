/* purpose : merge two array*/

#include <stdio.h>

#include <conio.h>

void main()
{

	char ch[1000],ch1[1000],copyarray[1000];

	int loop=0,copyloop=0;
	
  	printf("enter first sentence\n");

	scanf("%c",&ch[loop]);

	while(ch[loop]!='$')

	{
		
		loop++;

		scanf("%c",&ch[loop]);

		
	}

     ch[loop]='\0';

	 fflush(stdin);
	 
	 loop=0;

	printf("enter second sentence\n");

	scanf("%c",&ch1[loop]);

	while(ch1[loop]!='$')

	{
		
		loop++;

		scanf("%c",&ch1[loop]);

		
	}

     ch1[loop]='\0';

    loop=0;

	copyloop=0; 

	while(ch[loop]!='\0')
	{
		
		copyarray[copyloop]=ch[loop];
		loop++;
        copyloop++; 

	
	}

	loop=0;


	while(ch1[loop]!='\0')
	{
		
		copyarray[copyloop]=ch1[loop];
		loop++;
        copyloop++; 

	
	}


    copyarray[copyloop]='\0';
	
	printf("\nmerge string  \n");

    copyloop=0;

	while(copyarray[copyloop]!='\0')
	{
		printf("%c",copyarray[copyloop]);

		copyloop++;
	}

	getch();

}  
/* purpose : copy first N characters..*/

#include <stdio.h>

#include <conio.h>

void main()
{

	char ch[1000],copyarray[1000];

	int loop=0,N;
	
  	printf("enter sentence\n");

	scanf("%c",&ch[loop]);

	while(ch[loop]!='$')

	{
		
		loop++;

		scanf("%c",&ch[loop]);

		
	}

	ch[loop]='\0';

     printf("\nhow many characters to be copy\n");	  

	 scanf("%d",&N);
	
	loop=0;

	while(ch[loop]!='\0'&&loop<N)
	{
		copyarray[loop]=ch[loop];

		loop++;
	}

    copyarray[loop]='\0';
	
	printf("\n copy array \n");

    loop=0;

	while(copyarray[loop]!='\0')
	{
		printf("%c",copyarray[loop]);

		loop++;
	}

	getch();

}  
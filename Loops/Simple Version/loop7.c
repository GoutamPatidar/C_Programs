/* purpose : replace the given pattern*/

#include <stdio.h>

#include <conio.h>

void main()
{

	char ch[1000],pat[100],repat[30],recopy[1000];

	int loop=0,patloop=0, check=0,recount=0,copycount=0;

	printf("enter string\n");

   	scanf("%c",&ch[loop]);

	while(ch[loop]!='$')

	{
		
		loop++;

		
		scanf("%c",&ch[loop]);

		
	}

     ch[loop]='\0';

     printf("enter pattern\n");

   	scanf("%c",&pat[patloop]);

	while(pat[patloop]!='$')

	{
		
		patloop++;

		
		scanf("%c",&pat[patloop]);

		
	}

     pat[patloop]='\0';

     printf("enter replace pattern\n");

	 patloop=0;

   	scanf("%c",&repat[patloop]);

	while(repat[patloop]!='$')

	{
		
		patloop++;

		
		scanf("%c",&repat[patloop]);

		
	}

     repat[patloop]='\0';



	  loop=0;

	  recount=0;

	while(ch[loop]!='\0')
	{
		patloop=0;

		check=loop;

	    while(pat[patloop]==ch[check] && pat[patloop]!='\0')
		{ 
			  patloop++;
			   check++;
		}

		if(pat[patloop]=='\0')
		{
			 loop=check;
			 recount=0;
			 while(repat[recount]!='\0')
			 {
				 recopy[copycount]=repat[recount];
				 recount++;
				 copycount++;
			 }
		}

       	else
		{
          recopy[copycount]=ch[loop];
		  copycount++;
		  loop++;
		}

	      
	
	}
    
	recopy[copycount]='\0';

	printf("pattern after replace\n");

	loop=0;

	while(recopy[loop]!='\0')

	{
					
		printf("%c",recopy[loop]);
		loop++;
		
	}
	
     
	  
	getch();

}
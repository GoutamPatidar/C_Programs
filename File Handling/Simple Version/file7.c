/* purpose : grep all files*/


#include<stdio.h>
#include<conio.h>

void main(argc,argv)
int argc;
char *argv[];

{
	FILE *fp;
    
	int count=0, line=0,floop;

	char ch[100];

	int loop=0;

	if(argc<3)
	{
         printf("usage is wrong");
		 return;
	}

    for(floop=2;floop<argc;floop++)
	{
        count=0;

		fp=fopen(argv[floop],"r");

		if(fp==NULL)
		{
			printf("file opening error");

			return;
		}

		printf(" pattern string\n");

		for(loop=0,ch[loop]=getc(fp);feof(fp)==0;loop++,ch[loop]=getc(fp))
		{   
		
			if(ch[loop]=='\n') 
			{
				int inloop,patloop,subloop;

				line++;
		
				ch[loop]='\0';
		
				for(subloop=0;ch[subloop];subloop++)

				{

					for(inloop=subloop,patloop=0; (ch[inloop]==argv[1][patloop] 
 					&& argv[1][patloop]!='\0') ; inloop++,patloop++);

					if(argv[1][patloop]=='\0')
					{
							 count++;
							 printf("%d  :  %s\n",line ,ch);
					}
				 
				}

           
			  loop=-1;
   
			}

		}
	 printf("pattern %d \n",count);
	}
	

	fcloseall();
       
	 getch();
	


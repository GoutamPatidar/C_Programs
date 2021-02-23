/* purpose : grep all files */


#include<stdio.h>
#include<conio.h>

void main(argc,argv)
int argc;
char *argv[];

{
	FILE *fp;
    
	int line=0;				
	char ch[200],*p,  *q, *r;
	int i=0;
	if(argc<3)
	{
         printf("usage is wrong");
		 return;
	}

    for(i=2; i<argc; i++)
	{
	
	line=0;

	printf("\nfile name : %s\n", argv[i]);
	
	fp=fopen(argv[i],"r");

	if(fp==NULL)
	{
		printf("file opening error");

		return;
	}

	q=argv[1];

	

    for(p=ch, *p=getc(fp);feof(fp)==0;  *(p)=getc(fp))
	{

		if(*p=='\n')
		{

		 line++;
		 *(++p)='\0';
		for(p=ch; *p; p++)
		{
			for( r=p, q=argv[1]; *r==*q && *q!='\0'; r++, q++);
		
			if(*q=='\0')
			{
		
				printf("%d : %s",line, ch);
				
			}
		}
		p=&ch;
		}
		else
			p++;
	}

    

	fcloseall();
       
	getch();
	}
	

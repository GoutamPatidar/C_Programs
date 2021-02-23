/* purpose : Grep all files with line number*/ 
 

#include<stdio.h>
#include<conio.h>
main (argc, argv)
int argc;
char *argv[];
{
	FILE *sp;
	
	char a[200],b[100];

	int line,i,j;

	if(argc<2)
	{
		printf("usage is wrong");
		return;
	}

	

	for(j=2; j<argc; j++)
    {
		
		printf("file name for grep : %s \n", argv[j]);

		sp=fopen(argv[j], "r");
	

		if(sp==NULL)
		{
			printf("file Opening Error");
			return;
		}

	

		line=0;


		while(loadarray(sp,a))
		{
			i=countpattern(a,argv[1]);

			line++;

			if(i)
			{
				printf("pattern is occured at line number : %d \n",line);
				
			}
		}

		i=countpattern(a,argv[1]);

		line++;

		if(i)
		{
			printf("pattern is occured at line number : %d \n",line);
				
		}
	
		fclose(sp);
	}		
        
		getch();

	    
		
	
}


loadarray(sp,ch)
FILE *sp;
char ch[];
{

	int i=0;

	for(i=0, ch[i]=getc(sp); ch[i]!=EOF ; ch[++i]=getc(sp)) 
	{

		if(ch[i]=='\n')
		
		{
			ch[i]='\0';
			return 1;

		}
	}
	
	
	ch[i]='\0';

	return 0;
	
}


countpattern(a,b)
char a[],b[];

{

	int i,j,k,no;

	no=0;

	for ( i=0; a[i]; i++)
	{
		for(j=0, k=i; a[k]==b[j]&& b[j]!='\0'; j++, k++);
			     


		if(b[j]=='\0')

			no++;
	}

	return no;
		
}  
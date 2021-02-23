/* purpose : Grep all files with line number*/ 


#include<stdio.h>
#include<conio.h>
main (argc, argv)
int argc;
char *argv[];
{
	FILE *sp;
	
	char a[200],b[100];

	int line,count,j;

	if(argc<3)
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
			countpattern(a,argv[1],&count);

			line++;

			if(count)
			{
				printf("pattern is occured at line number : %d \n",line);
				
			}
		}

		countpattern(a,argv[1], &count);

		line++;

		if(count)
		{
			printf("pattern is occured at line number : %d \n",line);
				
		}

			

		getch();

	    fclose(sp);
		
	}
}
loadarray(sp,ch)
FILE *sp;
char *ch;
{

	for(*ch=getc(sp); *ch!=EOF ; ch++, *ch=getc(sp)) 
	{

		if(*ch=='\n')
		
		{
			*ch='\0';
			return 1;

		}
	}
	
	
	*ch='\0';

	return 0;
	
}

countpattern(a,b, count)
char *a,*b;
int *count;
{
	char *temp, *p;

	*count=0;

	for (  ; *a; a++)
	{
		for(temp=b, p=a ;  *p==*temp && *temp!='\0'; temp++, p++);

		if(*temp=='\0')

			(*count)++;
	}

	
}
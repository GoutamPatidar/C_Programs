/* purpose : Print the line by line with line number from file    */


#include<stdio.h>
#include<conio.h>

main (argc, argv)
int argc;
char *argv[];
{
	FILE *sp;
	
	char a[200];

	int line;

	if(argc!=2)
	{
		printf("usage is wrong");
		return;
	}

	
		sp=fopen(argv[1], "r");
	

		if(sp==NULL)
		{
			printf("file Opening Error");
			return;
		}

		line=0;
		while(loadarray(sp,a))
		{
			line++;
			printf("\n%d : ",line);
			printtext(a);
			if(line%24==0)
				getch();
		}

		line++;
		printf("\n%d : ",line);
		printtext(a);

		getch();

	    fclose(sp);
		
	
}


loadarray(sp,ch)
FILE *sp;
char *ch;
{

	

	for(*ch=getc(sp); *ch!=EOF ; *(++ch)=getc(sp))
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




printtext(b)
char *b;
{
	for( ; *b ; putchar(*b), b++);

}
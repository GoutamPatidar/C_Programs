/* purpose : display the text from given files using command line arguments  */


#include<stdio.h>
#include<conio.h>

void main(argc,argv)
int argc;
char *argv[];

{
	FILE *fp;
    
	char ch;

	int loop;

	if(argc<2)
	{
         printf("usage is wrong");
		 return;
	}

	for(loop=1;loop<argc;loop++)
	{
		fp=fopen(argv[loop],"r");

		if(fp==NULL)
		{
			printf("file opening error");

			return;
		}

		for(fscanf(fp,"%c",&ch);feof(fp)==0;fscanf(fp,"%c",&ch))
		{
		
			printf("%c",ch);

		
		}

	 
		fclose(fp);

		getch();

	}


}  
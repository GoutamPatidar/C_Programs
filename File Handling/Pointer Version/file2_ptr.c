/* purpose : display the text from given files using command line arguments  */

#include<stdio.h>
#include<conio.h>

void main(argc,argv)
int argc;
char *argv[];

{
	FILE *fp;
    
	char ch,*p ; 

	int loop;

	if(argc<2)
	{
         printf("usage is wrong");
		 return;
	}
	
	p=&ch;


	for(loop=1;loop<argc;loop++)
	{
		fp=fopen(argv[loop],"r");

		if(fp==NULL)
		{
			printf("file opening error");

			return;
		}

		printf("\ncontent of %s : \n", argv[loop]); 

		for(fscanf(fp,"%c",p);feof(fp)==0;fscanf(fp,"%c",p))
		{
		
			printf("%c",*p);

		
		}

	 
		fclose(fp);

		getch();

	}


}
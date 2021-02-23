/* purpose : display the  text from file*/

#include<stdio.h>
#include<conio.h>

void main()

{

	FILE *fp;
    
	char ch;

	fp=fopen("bio.dat","r");

	if(fp==NULL)
	{
		printf("file opening error");

		return;
	}

	for(fscanf(fp,"%c",&ch);feof(fp)==0; fscanf(fp,"%c",&ch))
		 printf("%c",ch);
	 
	fclose(fp);

	getch();

}  
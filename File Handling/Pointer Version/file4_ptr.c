/* purpose : read the text until $ is given*/


#include<stdio.h>
#include<conio.h>

void main()

{

	FILE *fp;
    
	char ch,*p;

	fp=fopen("bio.dat","r");

	if(fp==NULL)
	{
		printf("file opening error");

		return;
	}


	for(p=&ch,fscanf(fp,"%c",p); feof(fp)==0 ;  fscanf(fp,"%c",p))
		printf("%c",*p);
	 
	fclose(fp);
	getch();

}
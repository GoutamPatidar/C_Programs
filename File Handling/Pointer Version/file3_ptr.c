/* purpose : read  the biodata from file and print screen*/

#include<stdio.h>
#include<conio.h>

void main()

{

	FILE *fp;
    
	typedef struct bio
	{
		char name[20];
		int age;
		float salary;
		char address[20];

	}BIO;


	BIO user, *p;

	p=&user;

    fp=fopen("bio.dat","r");

	if(fp==NULL)
	{
		printf("file opening error");

		return;
	}


	while(feof(fp)==0)
	{
		fscanf(fp,"%s%d%f%s",p->name,&p->age,&p->salary,p->address);

		printf("%s %d %f %s\n",p->name,p->age,p->salary,p->address);

	}
	 
	fclose(fp);

	getch();

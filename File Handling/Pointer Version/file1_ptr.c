/* purpose : read the bio data from file using command line arguments   */

#include<stdio.h>
#include<conio.h>

void main(argc,argv)
int argc;
char *argv[];

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

	if(argc!=2)
	{
         printf("usage is wrong");
		 return;
	}

    fp=fopen(argv[1],"r");

	if(fp==NULL)
	{
		printf("file opening error");

		return;
	}

	p=&user;

	while(feof(fp)==0)
	{
		
		fscanf(fp,"%s%d%f%s",p->name,&p->age,&p->salary,p->address);

		printf("%s %d %f %s\n",p->name,p->age,p->salary,p->address);

	}

	 
	fclose(fp);
	getch();
}
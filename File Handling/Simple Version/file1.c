/* purpose : read the bio data from file using command line arguments  */


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


	BIO user;

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

	while(feof(fp)==0)
	{
		
		fscanf(fp,"%s %d %f %s",user.name,&user.age,&user.salary,user.address);

		printf(" %s %d %f %s\n",user.name,user.age,user.salary,user.address);

		
	}

	 
	fclose(fp);

	getch();

}  
/* purpose : read and store the biodata into file*/


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


	BIO user;

    fp=fopen("bio.dat","w");

	if(fp==NULL)
	{
		printf("file opening error");

		return;
	}

	scanf("%s%d%f%s",user.name,&user.age,&user.salary,user.address);

	fprintf(fp,"%s%d%f%s",user.name,user.age,user.salary,user.address);

	 
	fclose(fp);

}  
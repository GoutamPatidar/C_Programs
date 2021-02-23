/* purpose : read bio from file and print to screen*/

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

    fp=fopen("bio.dat","r");

	if(fp==NULL)
	{
		printf("file opening error");

		return;
	}

	while(feof(fp)==0)
    {
		fscanf(fp,"%s %d %f %s",user.name,&user.age,&user.salary,user.address);

		printf("%s %d %f %s\n",user.name,user.age,user.salary,user.address);
	}

	 
	fclose(fp);

	getch();

}  
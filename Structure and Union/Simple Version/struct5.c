/* purpose : read and display the biodata using typedef*/



#include<stdio.h>
#include<conio.h>

void main()

{

	struct bio
	{
		char name[20];
		int age;
		float sal;
		char address[20];
	};


	typedef struct bio BIO;

	BIO info;

	scanf("%s%d%f%s",info.name,&info.age,&info.sal,info.address);
	printf("%s%d%f%s",info.name,info.age,info.sal,info.address);

	getch();

}
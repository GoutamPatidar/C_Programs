/* purpose : read and display the biodata using structure*/


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

	struct bio info,*p   ;

	p=&info;

	scanf("%s%d%f%s", (*p).name, (*p).age,&(*p).sal,(*p).address);
	printf("%s  %d   %f  %s",(*p).name, (*p).age,(*p).sal,(*p).address);


	getch();

}
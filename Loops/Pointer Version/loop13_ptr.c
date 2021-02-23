/* purpose : print the numbers 1 to 100*/

#include<stdio.h>
#include<conio.h>

void main()

{

	int loop,*p;

	p=&loop;

	*p=1;

	do
	{

		printf("%d ",(*p)++);

		
	}

	while(*p<=100);

	getch();

}
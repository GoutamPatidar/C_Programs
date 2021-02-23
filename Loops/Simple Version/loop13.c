/* purpose : print the numbers 1 to 100*/

#include<stdio.h>
#include<conio.h>

void main()

{

	int loop;

	loop=0;

	do
	{

		printf("%d ",loop);

		loop++;
	}

	while(loop<=100);

	getch();

}  
/* purpose : print even or odd  numbers between  1 to 100*/

#include<stdio.h>
#include<conio.h>

void main()

{

	int loop;

	loop=0;

	do
	{

		if(loop%2==0)
			printf("%d  even\n",loop);
		else
			printf("%d  odd\n",loop);
		loop++;
	}

	while(loop<=100);

	getch();

} 
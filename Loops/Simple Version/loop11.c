/* purpose : print even or odd  numbers between  1 to 100*/
 
#include<stdio.h>
#include<conio.h>

void main()

{

	int loop;

	loop=0;

	do
	{

		if(loop%4==0)
			printf("%d  leap\n",loop);
		else
			printf("%d  not\n",loop);
		loop++;
	}

	while(loop<=100);

	getch();

} 
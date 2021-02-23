/* purpose : print even or odd  numbers between  1 to 100 */

#include<stdio.h>
#include<conio.h>

void main()

{

	int loop,*p;

	p=&loop;

	*p=1;

	do
	{

		if(*p%2==0)
			printf("%d  even\n",*p);
		else
			printf("%d  odd\n",*p);
		loop++;

		
	}

	while(*p<=100);

	getch();

}
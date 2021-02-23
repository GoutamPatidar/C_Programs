/* purpose : print leap or not */

#include<stdio.h>
#include<conio.h>

void main()

{

	int loop,*p;

	p=&loop;

	*p=1950;

	do
	{

		if(*p%4==0)
			printf("%d  leap\n",*p);
		else
			printf("%d  not\n",*p);
		loop++;

		
	}

	while(*p<=2000);

	getch();

}
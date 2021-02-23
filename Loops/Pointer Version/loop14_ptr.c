/* purpose : smallest of ten numbers using ternary operator etc..*/

#include <stdio.h>
#include <conio.h>

void main()
{
	int input,small,loop=1;
	int *pin, *ps;

	pin=&input;
	ps=&small;
	*ps=32767;

	while(loop<=10)
	{
		scanf("%d",pin);
		*ps=*pin<*ps?*pin:*ps;
		loop++;

	}

	printf("small %d",*ps);
	getch();
}
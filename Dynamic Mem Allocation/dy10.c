/* purpose : read and display text using dynamic allocation*/


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	char *pa, *pt;
	pa=(char *) malloc(100);

	printf("Enter text..\n");
	for(pt=pa; (*pt=getchar())!='$'; pt++);

	*pt='\0';

	printf("\nGiven text..\n");
	for(pt=pa; *pt; putchar(*pt++));
	free(pa);

	getch();

}  
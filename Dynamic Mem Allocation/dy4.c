/* purpose : read N characters and display text using dynamic allocation*/


#include <stdio.h>
#include <conio.h>
void main()
{
	char *pa, *pt;

	int n;

	printf("how many characters.\n");
	scanf("%d", &n);

	pa=(char *) malloc(n);

	printf("Enter text..\n");
	for(pt=pa; (*pt=getchar())!='$'; pt++);

	*pt='\0';

	printf("\nGiven text..\n");
	for(pt=pa; *pt; putchar(*pt++));

	free(pa);

	getch();

}  
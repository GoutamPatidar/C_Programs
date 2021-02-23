/* purpose : read and print integer array using functions */


#include <stdio.h>
#include <conio.h>
void main()
{
	char *pa;
	int n;
	printf("enter n value..\n");
	scanf("%d", &n);
	pa=(char *)malloc(n * sizeof(int));
	printf("enter numbers..\n");
	readnum(pa);
	printf("given numbers..\n");
	printnum(pa);
	free(pa);
	getch();
}


readnum(int *ta)
{
		
	for( scanf("%d", ta); *ta!=-1000; ta++, scanf("%d",ta));
	
}

printnum(int *ta)
{

	for( ; *ta!=-1000 ; printf(" %d", *ta), ta++);
}
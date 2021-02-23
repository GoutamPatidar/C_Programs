/* purpose : read and display the N integer numbers */


#include <stdio.h>
#include <conio.h>
void main()
{
	int *p, *pt, i=0, n;
	
	printf("enter n value ..\n");
	scanf("%d", &n);
	
	p=(int *) malloc(n * sizeof(int));
	
	pt=p;

	printf("Enter numbers..\n");

	
	while(i<n)
	{
		scanf("%d", p);
		i++, p++;
		
	}
	*p=-1000;
	p=pt;

	printf("Given numbers..: ");

	while(*p!=-1000)
	{
		printf(" %d",*p);
		p++;
	}
	free(pa);
	getch();

}  
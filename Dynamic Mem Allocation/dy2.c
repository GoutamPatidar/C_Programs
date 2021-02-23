/* purpose : biggest of two integer numbers using dynamic allocation*/

#include <stdio.h>
#include <conio.h>
void main()
{
	int *p1, *p2, *big;
	
	p1=(int *) malloc(1* sizeof(int));
	p2=(int *) malloc(1* sizeof(int));
	big=(int *) malloc(1* sizeof(int));

	printf("Enter numbers..\n");
	scanf("%d%d", p1,p2);

	*big= *p1 >*p2 ? *p1 : *p2;
	printf("\nbig.. : %d \n", *big);
	getch();

}  
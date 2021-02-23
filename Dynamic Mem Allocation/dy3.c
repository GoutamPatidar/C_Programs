/* purpose : area of circle */


#include <stdio.h>
#include <conio.h>
void main()
{
	struct area
	{
		float rad;
		float area;
	};
	struct area *pa;
	pa=(struct area *) malloc (sizeof(struct area));
	printf("enter rad..\n");
	scanf("%f", &pa->rad);

	printf("Area.. : \n");
	pa->area= 3.14 * pa->rad * pa->rad;
	printf("%f", pa->area);

	free(pa);
	getch();
}  
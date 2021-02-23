/* purpose : read and display integer, float, char, double number*/


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	int *pi;
	float *pf;
	double *pd;
	char *pc;

	pi=(int *) malloc(1 * sizeof(int));
	pf=(float *) malloc(1 * sizeof(float));
	pd=(double *) malloc(1 * sizeof(double));
	pc=(char *) malloc(1 * sizeof(char));

	printf("Enter char..\n");
	scanf("%c", pc);

	printf("Enter integer..\n");
	scanf("%d", pi);

	printf("Enter float..\n");
	scanf("%f", pf);

	printf("Enter double..\n");
	scanf("%lf", pd);

	printf("\nGiven values.. : %d  %f  %lf %c\n", *pi, *pf,*pd, *pc);
	getch();

}  
/* purpose : Arithmetic operations of two float numbers*/

#include <stdio.h>

void main()

{
	float  one,two;
	float  *po, *pt;
	po=&one;
	pt=&two; 
	scanf("%f%f", &one,&two);
	printf("\nsum : %f \ndiff : %f \npro : %f \nquo : %f",
		 *po+*pt,*po-*pt,*po**pt,*po/(*pt));
	getch();

}
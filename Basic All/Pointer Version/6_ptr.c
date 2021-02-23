/* purpose : area of circle with reading input */

#include <stdio.h>
#include <conio.h>
void main()

{
double r, area;
double *rp,*parea;
rp=&r;
parea=&area;
scanf("%lf",&r);
*parea= 3.14 * (*rp) * (*rp); 
printf("%lf", *parea);
getch();

}
/* purpose : area of sphere with  reading input  */



#include <stdio.h>
#include <conio.h>
void main()

{
double r, area;
double *rp,*parea;
rp=&r;
parea=&area;
scanf("%lf",&r);
*parea= 4.0/3.0 * (*rp) * (*rp) * (*rp); 
printf("%lf", *parea);
getch();

}
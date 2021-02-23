/* purpose : area of triangle with reading input */

#include <stdio.h>
#include <conio.h>
void main()

{
double l, b,area;
double *lp,*bp, *parea;
lp=&l;
bp=&b;
parea=&area;
scanf("%lf%lf",&l,&b);
*parea= 0.5 * (*lp) * (*bp); 
printf("%lf", *parea);
getch();

}
/* purpose : area of triangle with out reading input */

#include <stdio.h>
#include <conio.h>
void main()

{
double l=4.0, b=2.0,area;
double *lp,*bp, *parea;
lp=&l;
bp=&b;
parea=&area;
*parea= 0.5 * (*lp) * (*bp); 
printf("%lf", *parea);
getch();

}
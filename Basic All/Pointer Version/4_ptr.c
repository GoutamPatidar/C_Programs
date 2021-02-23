/* purpose : area of sphere with out reading input  */


#include <stdio.h>
#include <conio.h>
void main()

{
double rad=1.0,area;
double *rp, *parea;
rp=&rad;
parea=&area;
*parea= 4.0/3.0 * *rp * *rp * *rp;
printf("%lf", *parea);
getch();

}
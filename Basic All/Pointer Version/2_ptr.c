/* purpose : area of circle with out reading input */

#include <stdio.h>
#include <conio.h>
void main()

{
double radius=2.0,area;
double *pradius, *parea;
pradius=&radius;
parea=&area;
*parea= 3.14 * (*pradius) * (*pradius); 
printf("%lf", *parea);
getch();

}
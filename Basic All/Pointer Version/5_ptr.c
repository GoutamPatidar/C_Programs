/* purpose : circumference of circle with out reading input */


#include <stdio.h>
#include <conio.h>
void main()

{
double rad=1.0,cir;
double *rp, *pcir;
rp=&rad;
pcir=&cir;
*pcir= 4.0/3.0 * *rp * *rp * *rp;
printf("%lf", *pcir);
getch();

}
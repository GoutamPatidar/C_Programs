/* purpose : circumference of  circle  using input value  */


#include <stdio.h>
#include <conio.h>
void main()

{
double r, cir;
double *rp,*pcir;
rp=&r;
pcir=&cir;
scanf("%lf",&r);
*pcir=  2.0 * 3.14 * (*rp); 
printf("%lf", *pcir);
getch();

}
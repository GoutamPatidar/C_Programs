/* purpose : read and print the given double   */


#include <stdio.h>
#include <conio.h>
void main()
{
double num, *pnum;
pnum=&num;
scanf("%lf", &num);
printf("%lf", *pnum);
getch();
}
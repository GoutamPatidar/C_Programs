/* purpose : read and print the given double with two decimal places  */


#include <stdio.h>
#include <conio.h>
void main()

{

double num, *pnum;
pnum=&num;
scanf("%lf", &num);
printf("%.2lf", *pnum);
getch();

}
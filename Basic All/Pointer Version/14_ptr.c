/* purpose : read and print the given float with two decimal places  */

#include <stdio.h>
#include <conio.h>
void main()

{

float num, *pnum;
pnum=&num;
scanf("%f", &num);
printf("%.2f", *pnum);
getch();

}
/* purpose : read and print the given float */


#include <stdio.h>
#include <conio.h>
void main()

{

float num, *pnum;
pnum=&num;
scanf("%f", &num);
printf("%f", *pnum);
getch();

}
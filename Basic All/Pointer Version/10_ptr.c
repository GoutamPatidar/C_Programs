/* purpose : read and print the given integer    */


#include <stdio.h>
#include <conio.h>
void main()

{

int num, *pnum;
pnum=&num;
scanf("%d", &num);
printf("%d", *pnum);
getch();

}
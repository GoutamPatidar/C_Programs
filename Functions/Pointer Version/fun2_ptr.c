/* purpose : Sum of two integer numbers  */

#include<stdio.h>
#include<conio.h>

void main ()
{
	int a,b,total;
	input(&a,&b);
	sum(a,b,&total);
	printf("%d", total);
	
	getch();

}

input(x,y)
int *x, *y;
{
	scanf("%d%d", x,y);
}
sum(x,y,tot)
int x,y,*tot;
{
	*tot = x +y ;
   
}
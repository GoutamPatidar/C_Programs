/* purpose : Sum of two integer numbers  */

#include<stdio.h>
#include<conio.h>

void main ()
{
	int a,b,total;
	scanf("%d%d", &a,&b);
	total=sum(a,b);
	printf("%d", total);
	
	getch();

}


int sum(x,y)
int x,y;
{

	int temp;
	temp = x +y ;
    	return(temp);
}  
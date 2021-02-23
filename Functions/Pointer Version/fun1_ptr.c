/* purpose : Area of circle  */


#include<stdio.h>
#include<conio.h>

void main ()
{
	float radius,result;
	input(&radius);
	area(radius, &result);
	printf("%f", result);
	getch();

}

input(rad)
float *rad;
{
	scanf("%f", rad);
}

area(r, ar)
float r,*ar;
{
	*ar = 3.14 * r * r ; 
}
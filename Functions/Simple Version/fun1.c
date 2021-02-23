/* purpose : Area of circle  */


#include<stdio.h>
#include<conio.h>

void main ()
{
	float radius,result,area();//area(),prototype declaration(not needed in c) 
	scanf("%f", &radius);
	result=area(radius);
	printf("%f", result);
	getch();

}


float area(r)
float r;
{

	float temp;
	temp = 3.14 * r * r ; 
    return(temp);
}  
/* purpose : area of sphere with  reading input */


#include <stdio.h>

void main()

{
	double radius, area;

	scanf("%lf",&radius);

	area= 4.0/3.0 * 3.14 * radius * radius *radius;

	printf("%lf", area);
}  
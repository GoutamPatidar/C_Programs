/* purpose : area of triangle with  reading input */


#include <stdio.h>

void main()

{
	double breath,height,area;

	scanf("%lf%lf", &breath,&height);

	area= 0.5 * breath * height;

	printf("%lf", area);

}  
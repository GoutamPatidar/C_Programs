/* purpose : sum of first 100 numbers */

#include <stdio.h>
#include <conio.h>
void main()
{
	int loop,*p, sum, *psum;

	p=&loop;

	psum=?

	*p=1;

	*psum=0;

	while (*p<=100)
	 {
		 *psum=*psum+*p;

		 *p=*p+1;
	 }

	printf("sum : %d ", *psum);
	getch();
}
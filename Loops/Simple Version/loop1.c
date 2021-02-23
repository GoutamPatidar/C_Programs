/* purpose : sum of first 100 numbers*/


#include <stdio.h>
void main()
{
	int loop=1,sum=0;

	 while (loop<=100)
	 {
		 sum=sum+loop;

		 loop=loop+1;
	 }

	 printf("sum= %d",sum);

} 
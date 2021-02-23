/* purpose : Arithmetic operations of two long numbers */


#include <stdio.h>

void main()

{
	long int one,two;

	scanf("%ld%ld", &one,&two);

	printf("%ld\n%ld\n%ld\n%ld\n%ld",one+two,one-two,one*two,one/two,one%two);


}  
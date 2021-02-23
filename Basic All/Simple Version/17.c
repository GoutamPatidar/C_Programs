/* purpose : Arithmetic operations of two integer numbers */

#include <stdio.h>

void main()

{
	int one,two;

	scanf("%d%d", &one,&two);

	printf("%d%d%d%d%d",one+two,one-two,one*two,one/two,one%two);

	getch();

}  
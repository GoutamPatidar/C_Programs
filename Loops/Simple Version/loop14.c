/* purpose : smallest of ten numbers using ternary operator etc..*/

#include <stdio.h>
#include <conio.h>

void main()
{
	int input,small,loop=1;
 
	

	small=32767;

	while(loop<=10)
	{
	
		
		scanf("%d",&input);

		small=input<small?input:small;
		
		loop++;

		

	    
	}

	printf("small %d",small);

	getch();
}  
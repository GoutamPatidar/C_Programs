/* purpose : read and display 3x3 matrix*/


#include <conio.h>
#include<stdio.h>

void main()

{

	int mat[3][3];

	int in_loop=0,out_loop=0;
	
	while ( out_loop<3)
	{
		in_loop=0;

		while (in_loop<3)
		{
			scanf("%d", &mat[out_loop][in_loop]);
			in_loop++;
		}

		out_loop++;

	}


	in_loop=0,out_loop=0;
	
	while ( out_loop<3)
	{
		in_loop=0;

		while (in_loop<3)
		{
			printf("%d   ", mat[out_loop][in_loop]);
			in_loop++;
		}

		out_loop++;
		printf("\n");

	}

	getch();

}  
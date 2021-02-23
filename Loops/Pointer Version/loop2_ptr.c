/* purpose : read and display 3x3 matrix*/


#include <conio.h>
#include<stdio.h>

void main()

{

	int mat[3][3], *pm;

	int i=0,j=0;
	
	pm=&mat;

	while ( i<3)
	{
		j=0;

		while (j<3)
		{
			scanf("%d",  (pm+i*3)+j );
			j++;
		}

		i++;

	}


	i=0,j=0;
	
	while ( i<3)
	{
		i=0;

		while (j<3)
		{
			printf("%d   ", *((pm+i*3)+j));
			j++;
		}

		i++;
		printf("\n");

	}

	getch();

}
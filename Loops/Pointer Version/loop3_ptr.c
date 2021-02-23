/* purpose : product of two 3x3 matrix */


#include <conio.h>
#include<stdio.h>

void main()

{

	int mat1[3][3], mat2[3][3], pro[3][3], *p1, *p2, *ps ;

	int i=0,j=0,k=0;
	
	p1=&mat1;
	p2=&mat2;
	ps=&pro;

	printf("enter matrix 1 \n");

	while ( i<3)
	{
		j=0;

		while (j<3)
		{
			scanf("%d",  (p1+i*3)+j );
			j++;
		}

		i++;

	}

	printf("enter matrix 2 \n");

	i=0,j=0;

	while ( i<3)
	{
		j=0;

		while (j<3)
		{
			scanf("%d",  (p2+i*3)+j );
			j++;
		}

		i++;

	}

	i=0,j=0;
	while ( i<3)
	{
		j=0;

		while (j<3)
		{
			*((ps+i*3)+j) =0;
			k=0;
			while(k<3)
			{
			   *((ps+i*3)+j) +=  *((p1+i*3)+k) *  *((p2+k*3)+j);
			   k++;
			}
			j++;
		}

		i++;
		

	}

    printf("product matrix  \n");
	
	i=0,j=0;
	
	while ( i<3)
	{
		j=0;

		while (j<3)
		{
			printf("%d   ", *((ps+i*3)+j));
			j++;
		}

		i++;
		printf("\n");

	}

	getch();

}
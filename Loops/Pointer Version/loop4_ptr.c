/* purpose : sum of two MxN matrix */


#include <conio.h>
#include<stdio.h>

void main()

{

	int mat1[5][5], mat2[5][5],  sum[5][5], *p1,*p2, * m,n, *pm;

	int i=0,j=0;
	
	pm=?

    p1=&mat1;

	p2=&mat2;

	printf("enter rows and colums\n");

	scanf("%d%d", &m,&n);

	printf("Enter matrix 1 \n");

	while ( i<m)
	{
		j=0;

		while (j<n)
		{
			scanf("%d",  (p1+i*5)+j );  // here 5 is depends on declartion. 
			j++;
		}

		i++;

	}

	printf("Enter matrix 2 \n");

	i=0; j=0;

	while ( i<m)
	{
		j=0;

		while (j<n)
		{
			scanf("%d",  (p2+i*5)+j );  // here 5 is depends on declartion. 
			j++;
		}

		i++;

	}	

	i=0; j=0;

	while (i<m)
	{
		j=0;

		while(j<n)
		{
			*((pm+i*5)+j)=*((p1+i*5)+j)+ *((p2+i*5)+j);
			j++;
		}

		i++;
	}

	printf("sum Matrix \n");

	i=0,j=0;
	
	while ( i<n)
	{
		j=0;

		while (j<m)
		{
			printf("%d   ", *((pm+i*5)+j));
			j++;
		}

		i++;
		printf("\n");

	}

	getch();

}
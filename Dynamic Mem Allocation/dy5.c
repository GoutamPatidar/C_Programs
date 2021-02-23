/* purpose : sum of M x N matrix*/


#include<stdio.h>
#include<conio.h>

main ()
{
	
	int *a, *b, *sum, i;

	int row,col;

	printf("Enter row and column Size\n");

	scanf("%d%d", &row,&col);

	a=(int *) malloc(row * sizeof(int));
	b=(int *) malloc(row * sizeof(int));
	sum=(int *) malloc(row * sizeof(int));
	for (i=0; i<row; i++)
	{
			a[i]=(int *) malloc(col * sizeof(int));
			b[i]=(int *) malloc(col * sizeof(int));
			sum[i]=(int *) malloc(col * sizeof(int));
	}

	printf("\nEnter %d x %d Matrix\n",row,col);

	readmatrix(a,row,col);

	printf("\nEnter %d x %d Matrix\n",row,col);

	readmatrix(b,row,col);

	summatrix(a,b,sum,row, col);

	printf("sum Matrix\n");

	printmatrix(sum,row,col);

	getch();

}

readmatrix(mat,row,col)
int *mat, row,col;
{
	int i, j;

	for(i=0;i<row;i++)
		for (j=0; j<col;j++)
			scanf("%d", mat+i*col+j);
}

summatrix(mat1,mat2,sum, row,col)
int *mat1,*mat2, *sum,row,col;
{
	int i, j;

	for(i=0;i<row;i++)
		for (j=0; j<col;j++)
			*(sum+i*col+j) = *(mat1+i*col+j) +  *(mat2+i*col+j);
}


printmatrix(mat,row,col)
int *mat,row,col;
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for (j=0; j<col;j++)
			printf("%d  ", *(mat+i*col+j));
		printf("\n");

	}
}  
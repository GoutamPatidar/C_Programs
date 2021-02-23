/* purpose : read and print a N x N matrix*/

#include<stdio.h>
#include<conio.h>

main ()
{
	
	int a[10][10];

	int n;
	
	printf("N value : \n");
	
	scanf("%d", &n);

	readmatrix(a,n);

	printf("given %d x %d Matrix\n",n,n);

	printmatrix(a,n);

	getch();

}

readmatrix(mat,n)
int *mat, n;
{
	int i, j;

	for(i=0;i<n;i++)
		for (j=0; j<n;j++)
			scanf("%d", mat+i*10+j);
}

printmatrix(mat,n)
int *mat,n;
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for (j=0; j<n;j++)
			printf("%d  ", *(mat+i*10+j));
		printf("\n");

	}
}
/* purpose : transpose of 3 x 3 matrix*/

#include<stdio.h>
#include<conio.h>

main ()
{
	
	int *a, *b;
	a=(int *) malloc(3 * sizeof(int));
	a[0]=(int *) malloc(3 * sizeof(int));
	a[1]=(int *) malloc(3 * sizeof(int));
	a[2]=(int *) malloc(3 * sizeof(int));

	b=(int *) malloc(3 * sizeof(int));
	b[0]=(int *) malloc(3 * sizeof(int));
	b[1]=(int *) malloc(3 * sizeof(int));
	b[2]=(int *) malloc(3 * sizeof(int));

	readmatrix(a);
	
	transpose(a,b);
	
	printmatrix(b);

	getch();

}

readmatrix(m)
int *m;
{
	int i, j;

	for(i=0;i<3;i++)
		for (j=0; j<3;j++)

			scanf("%d", m+i*3+j);
}

transpose(m,n)
int *m, *n;
{
	int i,j;
	for(i=0;i<3;i++)
		for (j=0; j<3;j++)
			*(n+j*3+i) =*(m+i*3+j);
	
	
}


printmatrix(m)
int *m;
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for (j=0; j<3;j++)
			printf("%d  ", *(m+i*3+j));
		printf("\n");
	}
}  
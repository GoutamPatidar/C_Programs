/* purpose : read and print a N x N matrix*/
/* date of written :  01/09/2006 */ 

#include<stdio.h>
#include<conio.h>

main ()
{
	
	int a[10][10];

	int n;

	scanf("%d", &n);

	readmatrix(a,n);

	printmatrix(a,n);

	getch();

}

readmatrix(m,n)
int m[][10], n;
{
	int i, j;

	for(i=0;i<n;i++)
		for (j=0; j<n;j++)

			scanf("%d", &m[i][j]);
}

printmatrix(m,n)
int m[][10],n;
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for (j=0; j<n;j++)
			printf("%d  ", m[i][j]);
		printf("\n");

	}
}  
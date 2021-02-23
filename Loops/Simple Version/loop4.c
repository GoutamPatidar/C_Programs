/* purpose : sum of two MxN matrix*/


#include <conio.h>
#include<stdio.h>

int main()

{

	int one[10][10] ,sec[10][10] ,sum[10][10];

	int in_loop=0,out_loop=0;
	
	int fir_row,fir_col,sec_row,sec_col,res_row,res_col;

    printf("no of rows and columns in first\n");

	scanf("%d%d",&fir_row,&fir_col);

	printf("no of rows and columns in second\n");

	scanf("%d%d",&sec_row,&sec_col);

	if(fir_col!=sec_col || sec_row!=fir_row)
	{

		printf(" please verify no of columns and rows");

		getch();

		exit();
	}
    
	res_row=fir_row;

	res_col=fir_col;
   
	printf("first matrix\n");

	while ( out_loop<fir_row)
	{
		in_loop=0;

		while (in_loop<fir_col)
		{
			scanf("%d", &one[out_loop][in_loop]);
			in_loop++;
		}

		out_loop++;

	}

     printf("second matrix\n");

   	in_loop=0,out_loop=0;
	
	while ( out_loop<sec_row)
	{
		in_loop=0;

		while (in_loop<sec_col)
		{
			scanf("%d", &sec[out_loop][in_loop]);
			in_loop++;
		}

		out_loop++;

	}
 

	in_loop=0,out_loop=0;
	

	while ( out_loop<res_row)
	{
		in_loop=0;

		while (in_loop<res_col)
		{
			sum[out_loop][in_loop]=one[out_loop][in_loop]+sec[out_loop][in_loop];
			in_loop++;
		}

		out_loop++;
	
	}

	printf("\nfirst matrix\n");

	in_loop=0,out_loop=0;
	

	while ( out_loop<fir_row)
	{
		in_loop=0;

		while (in_loop<fir_col)
		{
			printf("%d   ", one[out_loop][in_loop]);
			in_loop++;
		}

		out_loop++;

		printf("\n");

	}

	printf("\nsecond matrix\n");

	in_loop=0,out_loop=0;
	

	while ( out_loop<sec_row)
	{
		in_loop=0;

		while (in_loop<sec_col)
		{
			printf("%d   ", sec[out_loop][in_loop]);
			in_loop++;
		}

		out_loop++;
		printf("\n");

	}

	printf("\nsum matrix\n");

	in_loop=0,out_loop=0;
	

	while ( out_loop<res_row)
	{
		in_loop=0;

		while (in_loop<res_col)
		{
			printf("%d   ", sum[out_loop][in_loop]);
			in_loop++;
		}

		out_loop++;
		printf("\n");

	}

	getch();

}
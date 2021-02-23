/* purpose : product of two 3x3 matrix*/


#include <conio.h>
#include<stdio.h>

void main96()

{

	int one[3][3] ,sec[3][3] ,multi[3][3];

	int in_loop=0,out_loop=0,multi_loop=0;
	
	printf("first matrix\n");

	while ( out_loop<3)
	{
		in_loop=0;

		while (in_loop<3)
		{
			scanf("%d", &one[out_loop][in_loop]);
			in_loop++;
		}

		out_loop++;

	}

     printf("second matrix\n");

   	in_loop=0,out_loop=0;
	
	while ( out_loop<3)
	{
		in_loop=0;

		while (in_loop<3)
		{
			scanf("%d", &sec[out_loop][in_loop]);
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
		    
			multi[out_loop][in_loop]=0;
			
			multi_loop=0;
			
			while(multi_loop<3)
			{
			multi[out_loop][in_loop]+=one[out_loop][multi_loop]*
       sec[multi_loop][in_loop];

			multi_loop++;
			} 

			in_loop++;
		}

		out_loop++;
	
	}

	printf("\nfirst matrix\n");

	in_loop=0,out_loop=0;
	

	while ( out_loop<3)
	{
		in_loop=0;

		while (in_loop<3)
		{
			printf("%d   ", one[out_loop][in_loop]);
			in_loop++;
		}

		out_loop++;

		printf("\n");

	}

	printf("\nsecond matrix\n");

	in_loop=0,out_loop=0;
	

	while ( out_loop<3)
	{
		in_loop=0;

		while (in_loop<3)
		{
			printf("%d   ", sec[out_loop][in_loop]);
			in_loop++;
		}

		out_loop++;
		printf("\n");

	}

	printf("\nproduct\n");

	in_loop=0,out_loop=0;
	

	while ( out_loop<3)
	{
		in_loop=0;

		while (in_loop<3)
		{
			printf("%d   ", multi[out_loop][in_loop]);
			in_loop++;
		}

		out_loop++;
		printf("\n");

	}

	getch();


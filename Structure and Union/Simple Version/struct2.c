/* purpose : biggest of three numbes using structure*/

#include<stdio.h>
#include<conio.h>

void main()

{

	struct biggest
	{
		int a,b,c;

		 int big;
	};


	struct biggest num;

	scanf("%d%d%d",&num.a,&num.b,&num.c);

	num.big=(num.a>num.b)?(num.a>num.c?num.a:num.c) : (num.b>num.c?num.b:num.c);

	printf("big %d ",num.big);

	getch();

}
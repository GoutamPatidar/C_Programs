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


	struct biggest num, *p;

	p=&num;

	scanf("%d%d%d",&p->a,&p->b,&p->c);  // p->a , (*p).a  , both are same

	p->big=(p->a>p->b) ? (p->a>p->c?p->a:p->c) : (p->b>p->c?p->b:p->c);

	printf("big %d ",p->big);

	getch();

}
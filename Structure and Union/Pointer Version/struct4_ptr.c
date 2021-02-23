/* purpose : distance between two points of curve using typedef */

#include<stdio.h>
#include<conio.h>

void main()

{

	typedef struct point 

	{
		int xaxis;

		int yaxis;

	}POINT ;



	POINT one, two,  *p1,*p2;

	float dis=0;

	p1=&one;
	p2=&two;

	scanf("%d%d",&p1->xaxis,&p1->yaxis);
	scanf("%d%d",&p2->xaxis,&p2->yaxis);

	dis= sqrt((p1->xaxis-p2->xaxis)*(p1->xaxis-p2->xaxis) - (p1->yaxis-p2->yaxis)*(p1->yaxis-p2->yaxis));

	printf("%f",dis);

     getch();

}
/* purpose : read and display the difference of two complex numbers using typedef */

#include<stdio.h>
#include<conio.h>

void main()

{

	typedef struct complex
	{
		int real,image;
	} COMPLEX;


	COMPLEX com1,com2,diff, *p1,*p2,*p;

	p1=&com1;

	p2=&com2;

	p=&diff;

	scanf("%d%d%d%d",&p1->real,&p1->image,&p2->real,&p2->image);

	p->real = p1->real - p2->real;

	p->image = p1->image - p2->image;

	printf(" diff : %d  %d",p->real,p->image);

	getch();

}
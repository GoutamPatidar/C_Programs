/* purpose : read and display the difference of two complex numbers using typedef*/



#include<stdio.h>
#include<conio.h>

void main()

{

	typedef struct complex
	{
		int real,image;
	} COMPLEX;


	COMPLEX com1,com2,diff;

	scanf("%d%d%d%d",&com1.real,&com1.image,&com2.real,&com2.image);

	diff.real=com1.real-com2.real;

	diff.image=com1.image-com2.image;

	printf("%d%d%",diff.real,diff.image);

	getch();

} 
/* purpose : distance between two points of curve using typedef*/
/* date of written : 26/12/2004 */

#include<stdio.h>
#include<conio.h>

void main()

{

	typedef struct point 

	{
		int xaxis;

		int yaxis;

	}POINT ;



	POINT one,two;
    
	double dis;

	scanf("%d%d",&one.xaxis,&one.yaxis);	
	scanf("%d%d",&two.xaxis,&two.yaxis);

    dis= sqrt((one.xaxis-two.xaxis)*(one.xaxis-two.xaxis) - (one.yaxis-two.yaxis)*(one.yaxis-two.yaxis));
	
    printf("%f",dis);

     getch();

} 
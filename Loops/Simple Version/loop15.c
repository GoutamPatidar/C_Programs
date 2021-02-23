/* purpose : print leap years  numbers between two ranges*/


#include <stdio.h>

#include<conio.h>

void main()
{
	int M,N;

	scanf("%d%d",&M,&N);

	 while (M<=N)
	 {
		 if(M%4==0)
		     printf("Leap   %d\n",M);
		 else
			 printf("not    %d\n",M);
		 M++;
	 }

	 getch();

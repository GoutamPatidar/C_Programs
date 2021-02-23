/* purpose : print leap years  numbers between given range*/


#include <stdio.h>
#include<conio.h>

void main()
{
	int m,n, *pm,*pn;;
    pm=&m;
	pn=&n;
	scanf("%d%d", pm, pn);
	 while (*pm<=*pn)
	 {
		 if(*pm%4==0)
		     printf("Leap   %d\n",*pm);
		 else
			 printf("not    %d\n",*pm);
		 (*pm)++;
	 }

	 getch();
}
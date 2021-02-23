/* purpose : smallest of three numbers */

#include <stdio.h>
#include <conio.h>   
	void main()
	{
		int one,two,three, *p1,*p2,*p3; 

		p1=&one; p2=&two; p3=&three;

		scanf("%d%d%d",p1,p2,p3);

		if ( *p1<*p2)
		{
			if ( *p1 <*p3)
				printf("%d",*p1);
			else
				printf("%d",*p3);
		}	
		else
		{
			if ( *p2 <*p3)
				printf("%d",*p2);
			else
				printf("%d",*p3);
		}	
		
		getch();
	}
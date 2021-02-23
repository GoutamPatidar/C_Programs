/* purpose : biggest of three numbers using && operator*/


#include <stdio.h>
void main()
	{
		int one,two,three; 

		scanf("%d%d%d",&one,&two,&three);

		if(one>two && one>three)
			printf("%d",one);
		else
			if(two>three)
				printf("%d",two);
			else
				printf("%d",three);
			
	}  
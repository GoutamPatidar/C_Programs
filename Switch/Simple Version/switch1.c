/* purpose : display the name of the day of week*/


#include <stdio.h>
void main()
{
	int day;

	scanf("%d",&day);

	switch(day)
	{
		case 1: 
			printf("sunday");
			break;
		case 2:
			printf("monday");
			break;
		case 3:
			printf("tuesday");
			break;
		case 4:
			printf("wednesday");
			break;
		case 5: 
			printf("thursday");
			break;
		case 6: 
			printf("friday");
			break;
		case 7:
			printf("saturday"); 
			break;
		default :
			printf("wrong input");
	}

}
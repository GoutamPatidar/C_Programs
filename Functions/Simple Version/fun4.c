/* purpose : index of biggest of ten numbers in array  */

#include<stdio.h>
#include<conio.h>

main ()
{
	int i,bigpos, num[10];

	readnum(num);

	bigpos=findbiggest(num);

	printf("Big Position big : %d",bigpos);

	getch();
}

readnum(temp)
int temp[10];
{
	int j;

	for(j=0;j<10; j++)

		scanf("%d", &temp[j]);
}

int findbiggest(no)
int no[10];
{
	int bigtemp=0,bigpos,k;

	for(k=0; k<10; k++)

	{
		if(no[k]>bigtemp)
		{
			bigtemp=no[k];
			bigpos=k;
		}
	}	

	return bigpos;
}  
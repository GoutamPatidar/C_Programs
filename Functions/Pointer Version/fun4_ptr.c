/* purpose : index of biggest of ten numbers in array  */


#include<stdio.h>
#include<conio.h>

main ()
{
	int bigpos, num[10];

	readnum(num);

	findbiggest(num, &bigpos);

	printf("Big Position big : %d",bigpos);

	getch();
}

readnum(temp)
int *temp;
{
	int j;

	for(j=0;j<10; j++)

		scanf("%d", temp+j);
}

findbiggest(no, bp)
int *no, *bp;
{
	int k=0;

	*bp=0;

	for(k=0; k<10; k++)

	{
		if(*(no+k)> *(no+*bp))
				*bp=k;
		
	}	


}
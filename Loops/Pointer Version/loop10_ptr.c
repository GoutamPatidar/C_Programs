/* purpose : interchange the biggest&&smallest number in Array */

#include<stdio.h>
#include<conio.h>

void main()
{
int arr[10], i, *p;

int bpos=0, spos=0,temp;

int pos=0;

for(p=arr,i=0; i<10; i++)
   scanf("%d",(p+i));

for(i=0; i<10; i++)
{
	spos=*(p+i)< (*(p+spos))? i: spos;
	bpos=*(p+i)>(*(p+bpos))? i: bpos;
}

temp=*(p+spos);
*(p+spos)=*(p+bpos);
*(p+bpos)=temp;

for(p=arr,i=0; i<10; i++)
   printf(" %d",*(p+i));

getch();
}
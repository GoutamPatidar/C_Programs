/* purpose : interchange the biggest&&smallest number in Array*/

#include<stdio.h>
#include<conio.h>

void main()

{

int arr[10];

int loop,temp;

int bpos=0,spos=0;

for(loop=0;loop<10;loop++)
scanf("%d",&arr[loop]);

for(loop=0;loop<10;loop++)
{
bpos=arr[bpos]<arr[loop]?loop:bpos;
spos=arr[spos]>arr[loop]?loop:spos;
}

temp=arr[bpos];
arr[bpos]=arr[spos];
arr[spos]=temp;

printf("after interchange small & big\n");

for(loop=0;loop<10;loop++)
printf("%d  ",arr[loop]);



getch();

}
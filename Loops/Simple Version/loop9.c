/* purpose : sum of Mth to Nth number*/

#include <stdio.h>
#include <conio.h>

void main()

{

int loop,M,N;

float sum=0;

printf("enter the starting range\n");

scanf("%d",&M);


printf("enter the ending range\n");

scanf("%d",&N);

for(loop=M;loop<=N;loop++)
sum+=loop;

printf("sum of %d to %d numbers  :  %f  ",M,N,sum);

getch();

} 
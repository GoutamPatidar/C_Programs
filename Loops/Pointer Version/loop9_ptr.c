/* purpose : sum of Mth to Nth number */


#include <stdio.h>
#include <conio.h>

void main()

{

int loop, *p, m,n;

int sum=0, *ps;

p=&loop;

ps=?

printf("Enter	M and N value  \n");

scanf("%d%d", &m,&n);

for(*p=m; *p<=n; (*p)++)
{
		*ps+=*p;
}

printf("Sum of %d to  %d numbers : %d",m,n, sum);

getch();


}
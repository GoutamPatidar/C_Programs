/* purpose : Arithmetic operations of two integer numbers */

#include <stdio.h>

void main()

{
	int one,two;

	int *po, *pt;

	po=&one;

	pt=&two; 

	scanf("%d%d", &one,&two);

	printf("sum : %d diff : %d pro : %d quo : %d remind :%d",
                   *po+*pt,*po-*pt,*po**pt,*po/(*pt),*po%*pt);

	getch();

}
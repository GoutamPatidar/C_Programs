/* purpose : Arithmetic operations of two long integer numbers*/

#include <stdio.h>

void main()

{
	long  one,two;
	long  *po, *pt;
	po=&one;
	pt=&two; 
	scanf("%ld%ld", &one,&two);
	printf("\nsum : %ld \ndiff : %ld \npro : %ld \nquo : %ld \nremind :%ld",
		 *po+*pt,*po-*pt,*po**pt,*po/(*pt),*po%*pt);
	getch();

}
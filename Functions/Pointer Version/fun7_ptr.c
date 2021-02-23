/* purpose : Copy the Left N Characters */


#include<stdio.h>
#include<conio.h>


main ()
{
	
	char a[100],b[100];

	int n;

	printf("enter text\n");

	readtext(a);
	
	printf("how many characters to be copied\n");

	scanf("%d", &n);

	printf("copied array..\n");

	copytext(a,b,n);

	printtext(b);
	
	getch();
}


readtext(p)
char *p;
{
	for(; (*p=getchar())!='$'; p++);

		*p='\0';
}


copytext(p,q,n)
char *p, *q;
int n;
{
	char *temp;
	
	for(temp=p+n; *p && p<temp ; p++, q++)
		*q=*p;

	*q='\0';

}


printtext(p)
char *p;
{
	for(; *p ; putchar(*p), p++);

}
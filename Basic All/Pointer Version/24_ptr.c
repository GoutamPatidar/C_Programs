/* purpose : float to int */


#include <stdio.h>
#include <conio.h>
void main()

{
	float fno, *pf;
	int ino, *pi;
	pi=&ino;
	pf=&fno;
	scanf("%f", &fno);
	*pi=(int)*pf;
	printf("%d",*pi);
	getch();
}
/* purpose : int to float */


#include <stdio.h>
#include <conio.h>
void main()

{
	float fno, *pf;
	int ino, *pi;
	pi=&ino;
	pf=&fno;
	scanf("%d", &ino);
	*pf=*pi; // *pf=(float)*pi , both are same.
	printf("%f",*pf);
	getch();
}
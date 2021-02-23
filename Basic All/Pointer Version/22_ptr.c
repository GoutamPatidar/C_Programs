/* purpose : read and print upper to lower */


#include <stdio.h>
#include <conio.h>
void main()

{
	char any, *pany;
	pany=&any;
	scanf("%c", &any);
	printf("%c", *pany+32);
	getch();
}
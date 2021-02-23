/* purpose : read and print the ascii value of the given character   */


#include <stdio.h>
#include <conio.h>
void main()

{

char ch, *pch;
pch=&ch;
scanf("%c", &ch);
printf("%d", *pch);
getch();

}
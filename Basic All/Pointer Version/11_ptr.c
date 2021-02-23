/* purpose : read and print an given character  */


#include <stdio.h>
#include <conio.h>
void main()

{

char ch, *pch;
pch=&ch;
scanf("%c", &ch);
printf("%c", *pch);
getch();

}
/* purpose : Read and Print the Text*/


#include<stdio.h>
#include<conio.h>

main ()
{
	
	char a[100];

	readtext(a);

	printtext(a);

	getch();
}


readtext(b)
char b[];
{
	int i;

	for(i=0; (b[i]=getchar())!='$'; i++);

	b[i]='\0';
}

printtext(b)
char b[];
{
	int i;

	for(i=0; b[i] ; putchar(b[i]), i++);

}  
/* purpose : Read and Print the Text*/
 

#include<stdio.h>
#include<conio.h>

main ()
{
	
	char a[100];

	printf("Enter text\n");
	readtext(a);

	printf("Given text\n");
	printtext(a);

	getch();
}


readtext(b)
char *b;
{
	for(  ; (*b=getchar())!='$'; b++);

	*b='\0';
}

printtext(b)
char *b;
{
	for( ; *b ; putchar(*b), b++);

}
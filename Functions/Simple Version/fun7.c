/* purpose : Copy the Left N Characters */

#include<stdio.h>
#include<conio.h>


main ()
{
	
	char a[100],b[100];
	int n;

	readtext(a);

	scanf("%d", &n);

	copytext(a,b,n);

	printtext(b);
	
	getch();
}


readtext(m)
char m[];
{
	int i;

	for(i=0; (m[i]=getchar())!='$'; i++);

	m[i]='\0';
}


copytext(a,b,n)
char a[],b[];
int n;
{
	int i;
	
	for(i=0; a[i]&& i<n ; i++)
	{
		b[i]=a[i];
		
	}

	b[i]='\0';

}


printtext(m)
char m[];
{
	int i;

	for(i=0; m[i] ; putchar(m[i]), i++);

} 
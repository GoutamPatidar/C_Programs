/* purpose : copy one array to another array using dynamic allocation*/
/* date of written : 17/09/2006 */

#include <stdio.h>
#include <conio.h>
void main()
{
	char *pa, *pb, *pt, *pt1;

	int n;

	printf("how many characters.\n");
	scanf("%d", &n);

	pa=(char *) malloc(n);

	printf("Enter text..\n");
	for(pt=pa; (*pt=getchar())!='$'; pt++);

	*pt='\0';

	pb=(char *) malloc(strlen(pa)+1);

	pt1=pb;

	for(pt=pa; *pt; pt++, pt1++)
		*pt1=*pt;
	*pt1='\0';

	printf("\ncopied text..\n");
	for(pt=pb; *pt; putchar(*pt++));

	free(pa);
	free(pb);
	
	getch();

}  
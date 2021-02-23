/* purpose : vowel or not*/
/* date of written : 06/09/2006 */

#include <stdio.h>
#include <conio.h>
void main()
	{

	  char vowel,*pch;

	  pch=&vowel;

	  scanf("%c",pch);
		
	  if(*pch=='a' ||*pch=='e' ||*pch=='i' ||*pch=='o' ||*pch=='u' ||
		  *pch=='A' ||*pch=='E' ||*pch=='I' ||*pch=='O' ||*pch=='U' )

		  printf("vowel");
	  else
		  printf("not");
	
	  getch();
}
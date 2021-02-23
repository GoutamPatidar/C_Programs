/* purpose : Replace the given pattern */

#include <stdio.h>
#include <conio.h>

void main()
{

	char a[100], pat[50], b[100], c[50], *p, *q, *r,*s, *t;

	p=a;

	q=pat;

	s=b;

	t=c;

	printf("enter text\n");

	scanf("%c",p);

	while(*p!='$')   
    

	{
		
		p++;

		scanf("%c",p);

		
	}

	*p='\0';

	fflush(stdin);

	printf("enter pattern to delete\n");

	scanf("%c",q);

	while(*q!='$')   
    

	{
		
		q++;

		scanf("%c",q);

		
	}

	*q='\0';

	fflush(stdin);

	printf("enter pattern by replace\n");

	scanf("%c",t);

	while(*t!='$')   
    
	{
		
		t++;

		scanf("%c",t);

		
	}

	*t='\0';

	p=a;

	while (*p)
	{
		r=p;
		q=pat;
		while(*r==*q && *q!='\0')
		{
			r++;
			q++;
		}
		
		if(*q=='\0')
		{
			p=r;
			t=c;
			while(*t!='\0')
			{
				*s=*t;
				s++;
				t++;
					
			}
			
		}
		else
		{
			*s=*p;
			s++;
			p++;

		}

	
	}
    
	*s='\0';
	printf("Modified text\n");

	s=b;

	while(*s!='\0') 
	{
		
		printf("%c", *s); 				
		
		s++;
	
	}

	getch();

}
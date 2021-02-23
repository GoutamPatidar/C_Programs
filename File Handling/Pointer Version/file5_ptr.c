/* purpose : convert upper to lower case letters  */


#include<stdio.h>
#include<conio.h>

void main(argc,argv)
int argc;
char *argv[];

{
	FILE *fp,*fpc;
    
	
	char ch, *p;

	if(argc!=3)
	{
         printf("usage is wrong");
		 return;
	}

    fp=fopen(argv[1],"r");

	if(fp==NULL)
	{
		printf("file opening error");

		return;
	}

	fpc=fopen(argv[2],"w");

	if(fpc==NULL)
	{
		printf("file opening error");

		return;
	}

	p=&ch;

	for(*p=getc(fp);feof(fp)==0;*p=getc(fp))
			
   		(*p>='A'&&*p<='Z')?putc(*p+32,fpc):putc(*p,fpc);

	 
	fcloseall();

	

}
/* purpose : convert upper to lower case letters  */

#include<stdio.h>
#include<conio.h>

void main(argc,argv)
int argc;
char *argv[];

{
	FILE *fp,*fpc;
    
	
	char ch;

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


	for(ch=getc(fp);feof(fp)==0;ch=getc(fp))
			
   		(ch>='A'&&ch<='Z')?putc(ch+32,fpc):putc(ch,fpc);

	 
	fcloseall();

	

}  
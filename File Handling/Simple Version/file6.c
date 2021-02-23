/* purpose : count upper and lower and number characters in files*/
/* date of written : 1/1/2005 */
#include<stdio.h>
#include<conio.h>

void main(argc,argv)
int argc;
char *argv[];

{
	FILE *fp;
    
	int line=0,upp=0,low=0,spe=0,num=0;

	char ch[100];

	int loop=0;

	if(argc!=2)
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

	printf("string\n");

    for(loop=0,ch[loop]=getc(fp);feof(fp)==0;loop++,ch[loop]=getc(fp))
	{   
		if('A'<=ch[loop]&&ch[loop]<='Z')  upp++;
		  else if ('a'<=ch[loop]&&ch[loop]<='z')  low++;
		     else if ('0'<=ch[loop]&&ch[loop]<='9')  num++; 
			    else spe++;

	}
    
    ch[loop]='\0';
	
	printf("%s",ch);

	printf("upp %d  low  %d  num %d  spe %d \n",upp,low,num,spe);

	fcloseall();
       
	 getch();
	

}  
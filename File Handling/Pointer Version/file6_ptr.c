/* purpose : count upper and lower and number characters in files  */


#include<stdio.h>
#include<conio.h>

void main(argc,argv)
int argc;
char *argv[];

{
	FILE *fp;
    
	int low, upp, spe, num;				
	char ch[200],*p;

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

	low=upp=spe=num=0;				

    for(p=ch, *p=getc(fp);feof(fp)==0; p++, *(p)=getc(fp) )
	{

		if('A'<=*p&&*p<='Z')  upp++;
		  else if ('a'<=*p&&*p<='z')  low++;
		     else if ('0'<=*p&&*p<='9')  num++; 
			    else spe++;

			
	}
    
    *p='\0';

	printf("%s",ch);

    printf("upp %d  low  %d  num %d  spe %d \n",upp,low,num,spe);
	fcloseall();
       
	 getch();
	

}
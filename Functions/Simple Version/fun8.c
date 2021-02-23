/* purpose : read text and store into file */
 

#include<stdio.h>
#include<conio.h>

main (argc, argv)
int argc;
char *argv[];
{
	FILE *fp;
	
	if(argc!=2)
	{
		printf("usage is wrong");
		return;
	}

	fp=fopen(argv[1], "w");

	if(fp==NULL)
	{
		printf("file Opening Error");
		return;
	}

	readfile(fp);

	fclose(fp);

	
}

	
readfile(tp)
FILE *tp;
{

	char ch;

	for(scanf("%c", &ch) ; ch!='$'; scanf("%c", &ch))
		fprintf(tp, "%c", ch);

}  
/* purpose : file read and printt the biodata into screen*/


#include<stdio.h>
#include<conio.h>

void main(argc,argv)
int argc;
char *argv[];
{
	FILE *fp;

	union info 
	{
		struct bio 
		{
			char name[20];
			int age;
			float sal;
			char add[20];
		}a;

		char b[sizeof(struct bio)];

	};


	union info stu;
	int i;

	if(argc!=2) 
	{
		printf("usage is wrong");
		return;
	}
	fp=fopen("bio.dat","r");

	if(fp==NULL) 
	{
		printf("file opening error");
		return;
	}


   for(;feof(fp)==0;)
   { 
		for(i=0;i<sizeof(struct bio ); stu.b[i++]=getc(fp));
			
		printf("\n%s\n%d\n%f\n%s\n",stu.a.name,stu.a.age,stu.a.sal,stu.a.add);

		
   }

   fclose(fp);

   getch();

}  
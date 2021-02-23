/* purpose : file read and printt the biodata into screen*/
/* date of written :11/09/2006 */

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


	union info stu,*p;
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

   p=&stu;		
		
   while(feof(fp)==0)
   { 
		for(i=0;i<sizeof(struct bio ); p->b[i++]=getc(fp));
			
		printf("\n%s %d %f %s\n",p->a.name,p->a.age,p->a.sal,p->a.add);

		
   }

   fclose(fp);

   getch();

}
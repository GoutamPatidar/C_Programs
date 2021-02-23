/* purpose : payslip of  the nth record*/
/* date of written : 3/1/2005 */

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
	int i,j,N,rp;

       double pf,hra,basic,da;	

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

  	scanf("%d",&N);

	 i= (N-1) * sizeof(struct bio);

	 rp=fseek(fp,i,0);

   	 for(j=0;j<sizeof(struct bio) ;j++)
		 stu.b[j]=getc(fp);

    

	 printf("%s\n%d\n%f\n%s\n",stu.a.name,stu.a.age,stu.a.sal,stu.a.add);

	 hra=0.10*stu.a.sal;
	 pf=0.05*stu.a.sal;
	 da=0.10*stu.a.sal;
	 basic=stu.a.sal-pf-hra-da;

	 printf(" pf %lf hra %lf da  %lf basic %lf",pf,hra,da,basic);

     
     fclose(fp);

   getch();

}  
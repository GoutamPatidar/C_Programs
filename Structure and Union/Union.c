/* purpose : read and display the name using union*/


#include<stdio.h>
#include<conio.h>

void main()

{

  union  name
	
  {		
	
  struct bio
	{
		char fname[20];
		char mname;
		char sname[20];
		
	}ok;
	
  char fullname[41];


   };
	union name info;

	scanf("%s%s",info.ok.fname,info.ok.sname);
	info.ok.mname=''; // no inital
	printf("%s",info.fullname);

	getch();

}     
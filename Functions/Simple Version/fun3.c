/* purpose : print  the limit 0-999 into words  */

#include<stdio.h>
#include<conio.h>

main ()
{
	int digit;

	scanf("%d", &digit);
	if(digit>=0 && digit<=999)
	{
		threedigit(digit);

	}

	else
		printf("given number is not a specified range");	
	getch();
}

threedigit(num)
int num;
{
		int temp, temp1;

		temp=num/100;

		temp1=num-temp*100;

		if(temp>0) 
		{

			singledigit(temp);
			printf(" hundred ");
			if(temp1!=0)
				twodigit(temp1);
		}
		
		else
		{
			twodigit(num);

		}
			


			

}

twodigit(num)
int num;
{
	int r,m;
		
	if (num >= 0 && num <= 9 )

		singledigit(num);
	else

		if (num>=11 && num <=19)

			tenrange(num);

		else
			if (num%10==0)	

				tens(num);
			else

			{
				
				r=num/10 * 10;
				m=num-r;
				tens(r);
				printf(" ");
				singledigit(m);

			}


}

tens(dig)
int dig;
{

	switch(dig)
	{
		case 10 : printf("ten"); break;
		case 20 : printf("twenty"); break;
		case 30 : printf("thirty"); break;
		case 40 : printf("fourty"); break;
		case 50 : printf("fifty"); break;
		case 60 : printf("sixty"); break;
		case 70 : printf("seventy"); break;
		case 80 : printf("eighty"); break;
		case 90 :  printf("ninety"); break;
		default: printf("Given number is not a specified range"); break;


	}

}

tenrange(dig)
int dig;
{

	switch(dig)
	{
		case 11 : printf("eleven"); break;
		case 12 : printf("twevel"); break;
		case 13 : printf("thirteen"); break;
		case 14 : printf("fourteen"); break;
		case 15 : printf("fifteen"); break;
		case 16 : printf("sixteen"); break;
		case 17 : printf("seventeen"); break;
		case 18 : printf("eighteen"); break;
		case 19 : printf("nineteen"); break;
		default: printf("Given number is not a specified range"); break;


	}

}


singledigit(dig)
int dig;
{

	switch(dig)
	{
		case 1 : printf("one"); break;
		case 2 : printf("two"); break;
		case 3 : printf("three"); break;
		case 4 : printf("four"); break;
		case 5 : printf("five"); break;
		case 6 : printf("six"); break;
		case 7 : printf("seven"); break;
		case 8 : printf("eight"); break;
		case 9 : printf("nine"); break;
		case 0 : printf("zero"); break;
		default: printf("Given number is not a single digit"); break;
}

}  
/* purpose : Arithmetic operations of two double numbers*/


void main()

{
	double  one,two;
	double  *po, *pt;
	po=&one;
	pt=&two; 
	scanf("%lf%lf", &one,&two);
	printf("\nsum : %lf \ndiff : %lf \npro : %lf \nquo : %lf",
		 *po+*pt,*po-*pt,*po**pt,*po/(*pt));
	getch();

}
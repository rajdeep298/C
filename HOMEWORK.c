/* <30 =fail
>30 <=50 =pass
>50 <=60 =2nd div
>60 <=80 =first div
>80 <=90 =Excellent
>90 <=100=Outstanding*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,d,e,f;
	printf("\n Enter the marks of COMS(H):");
	scanf("%f",&a);
	printf("\n Enter the marks of PHYS(P):");
	scanf("%f",&b);
	printf("\n Enter the marks of MATH(H):");
	scanf("%f",&c);
	printf("\n Enter the marks of ENG(AECC):");
	scanf("%f",&d);
	printf("\n Enter the marks of EVS(AECC):");
	scanf("%f",&e);
	f=(a+b+c+d+e)/5;
	if(f<=30)
	{
		printf("\n Failed in Examination");
	}
	else if(f>30 && f<=50)
	{
		printf("\n Passed in Examination");
	}
	else if(f>50 && f<=60)
	{
		printf("\n GRADE: 2nd DIVISON");
	}
	else if(f>60 && f<=80)
	{
		printf("\n GRADE: 1st DIVISON");
	}
	else if(f>80 && f<=90)
	{
	 printf("\n GRADE: EXCELLENT");
	}
	else if(f>90 && f<=100)
	{
		printf("\n GRADE: OUTSTANDING");
	}
	getch();
}


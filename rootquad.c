/* C programme to find the roots of a quadratic equation */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void rootquad(int a,int b,int c);
void main()
{
    double a,b,c,d,r1,r2,r3,r4,ip,rp;
    printf("\n Enter the coefficient of x^2 term:");
    scanf("%lf",&a);
    printf("\n Enter the coefficient of x term:");
    scanf("%lf",&b);
    printf("\n Enter the constant term:");
    scanf("%lf",&c);
    rootquad(a,b,c);
}
void rootquad(int a,int b,int c)//finding roots of the  quadratic equation
{
   double d,r1,r2,r3,r4,ip,rp;
   d=(b*b)-(4*a*c);
   if(d>0)
    {
         printf("\n The roots are REAL and DIFFERENT.");
        r1=(-b+(sqrt(d)))/(2*a);
        r2=(-b-(sqrt(d)))/(2*a);
         printf("\n The roots of the equation are:%.2lf,%.2lf",r1,r2);
    }
    else if(d==0)
    {
        printf("\n The roots are REAL and EQUAL.");
        r1=r2=-(b/(2*a));
        printf("\n The root of the equation is:%.2lf",r1);
    }
    else
    {
        printf("\n The roots are IMAGINARY .");
        rp = -b / (2 * a);
        ip = sqrt(-d) / (2 * a);
        printf("\n The roots of the equation are:%.2lf+(%.2lfi),%.2lf-(%.2lfi)", rp, ip, rp, ip);
    }
}
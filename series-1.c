/*WAP to compute the sum of the first n terms of the following series, S
=1+1/2+1/3+1/4+…… */
#include<stdio.h>
void main()
{
    int n;
    double i,S=0;
    printf("\n Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        S=S+1/(i);
    }
   printf("\n The sum of the series is:%lf",S);
}

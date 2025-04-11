/* C programme to calculate the gcd of two numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int m,n,i,max=0;
    printf("\n Enter two Numbers:");
    scanf("%d%d",&m,&n);
    for(i=1;i<(m<n?n:m);i++)
    {
        if(m%i==0 && n%i==0) 
        {
            max=i;
        }
    }
    printf("\n GCD is: %d\n",max);
}

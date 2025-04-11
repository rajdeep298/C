/* c programme to find whether a number is co prime or not */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,i,p;
    printf("\n Enter numbers: ");
    scanf("%d %d",&n1,&n2);
    p=0;
    for ( i = 2; i<=n1 && p==0; i++)
    {
        p=0;
       if(n1%i==0 && n2%i==0)
       {
           p = 1;
           break;
       }
    }
    if(p==0)
    {
        printf("\n They are coprime.");
    }
    else
    {
        printf("\n They are not coprime.");
    }
}
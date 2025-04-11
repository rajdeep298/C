/*WAP to compute the sum of the first n terms of the following series, S =1-2+3-
4+5…………….*/
#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf("\n Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            s-=i;
        }
        else
        {
            s+=i;
        }
    }
    printf("\n The sum of the series:%d",s);
}
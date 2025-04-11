/* C programme to calculate the number of 0's in a binary equivalent of a decimal*/
#include<stdio.h>
void main()
{
   int n,i,j=0,a[100],k;
    printf("\n Enter the Number:");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
       a[i]=n%2;
       n=n/2;
    }
    for(i=i-1;i>=0;i--)
    {
       k=a[i]&1;
        if(a[i]&1!=0)
        {
          continue;
        }
        else
        { 
         j++;
        }
    }
    printf("\n%d",j);
}
/*
 Enter the Number:23

1 */
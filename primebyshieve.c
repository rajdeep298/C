/* to find whether a number is prime or not using shieve method */
#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,j,f;
    printf("\n Enter the number:");
    scanf("%d",&n);
    f=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
        else
        {
            continue;
        }
    }
    if(f==0)
    {
       printf("\nThe number is prime.");
    }
    else
    {
        printf("\n The number is not prime.");
    }
}
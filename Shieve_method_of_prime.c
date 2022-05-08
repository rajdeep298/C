/* Shieve Method of Prime */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i,n,flag=0;
    printf("\n Enter A Number:");
    scanf("%d",&n);
    flag=0;
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("\n The num %d is prime. ",n);
    }
    else
    {
        printf("\n The num %d is not a prime. ",n);
    }
}
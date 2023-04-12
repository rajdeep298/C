/* to check whether three inputs are different from each other or not */
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\n Enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a!=b && a!=c && b !=c)
    {
        printf("\n They all are different!\n");
    }
    else
    {
        printf("\n They all are not different!\n");
    }
}
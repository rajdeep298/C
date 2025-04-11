#include<stdio.h>
int main()
{
    int n,c=0,c1=0,d=0,d1=0;
    printf("Enter a number...");
    scanf("%d",&n);
    while(n>9)
    {
        d=n%10;
        n/=10;
        d1=n%10;
        if(d>d1)
            c++;
        if(d1>d)
            c1++;
    }
    if(c==0)
    {
        printf("Descending number..");
    }
    else if(c1==0)
    {
        printf("Ascending number..");
    }
    else
    {
        printf("Bouncy number..");
    }
    return 1;
}
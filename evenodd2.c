#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,max;
    printf("\nEnter the limit:");
    scanf("%d",&max);
    for(i=0;i<max;i++)
    {
        if(i%2==0)
        {
            printf("\n The Even Numbers are:%d",i);
        }
        else
        {
            printf("\n The Odd Numbers are:%d",i);
        }
    }
    return 0;
    
}
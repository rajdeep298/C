/* check whehteher the input is positive or negative or zero */
#include<stdio.h>
void main()
{
    int n;
    printf("\n Enter A Number:");
    scanf("%d",&n);
    if(n>0 || n<0) 
    {
        printf("\nPositive:%d",n);
    }
    else if(n<0)
    {
        printf("\nNegative:%d",n);
    }
    else 
    {
        printf("0");
    }
}
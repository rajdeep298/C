/* c program to calculate profit and loss */
#include<stdio.h>
void main()
{
    float m,n;
    printf("\n Enter Selling and Cost price: ");
    scanf("%f%f",&m,&n);
    if(m>n)
    printf("\n Profit:%.2f",m-n);
    else
    printf("\n Loss:%.2f",n-m);
}
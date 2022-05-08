/* c program to calculate the discount */
#include<stdio.h>
void main()
{
    int n;
    float price=0;
    printf("\n Enter the price:");
    scanf("%d", &n);
    if(n<2000)
    {
        printf("\n You will get a 5 percent discount on the product.");
        price=n-(n*0.05);
        printf("\n You have to pay:%.2f", price);
    }
    else if(n>=2001 && n<=5000)
    {
        printf("\n You will get a 25 percent discount on the product.");
        price=n-(n*0.25);
        printf("\n You have to pay:%.2f", price);
    }
    else if(n>=5001 && n<=10000)
    {
        printf("\n You will get a 35 percent discount on the product.");
        price=n-(n*0.35);
        printf("\n You have to pay:%.2f", price);
    }
    else if( n>=10000)
    {
        printf("\n You will get a 50 percent discount on the product.");
        price=n-(n*0.50);
        printf("\n You have to pay:%.2f", price);
    }
}

/* c program to calculate amount of a electric bill and show the amount to be paid */
#include<stdio.h>
void main()
{
    float n;
    printf("\n Enter the units of electricity consumed:");
    scanf("%f", &n);
    if(n<100)
    {
        printf("\n You  have to pay ₹2/unit and you also have to pay ₹200 for service cost.");
        n=(2*n)+200;
        printf("\n Payable Amount:%d",n);
    }
    else if (n>=100 && n<=200)
    {
        printf("\n You  have to pay ₹1.8/unit and you also have to pay ₹200 for service cost.");
         n=(1.8*n)+200;
        printf("\n Payable Amount:%.2f",n);
    }
    else if(n>=200)
    {
        printf("\n You  have to pay ₹1.5/unit and you also have to pay ₹200 for service cost.");
         n=(1.5*n)+200;
        printf("\n Payable Amount:%.2f",n);
    }
}
/* c program to accept two/more digit number and multiply the digits of the number */
#include<stdio.h>
void main()
{
    long int num;
    int digit,sum=0,temp=0;
    printf("\n Enter the number to multiply digits:");
    scanf("%ld",&num);
    temp=num;
    while(num>0)
    {
        digit=num%10;
        sum*=digit;
        num=num/10;
    }
    if (sum==temp) printf("\n Special Number.");
    else printf("\n Not a special number.");
}
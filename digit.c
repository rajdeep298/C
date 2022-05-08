#include<stdio.h>
#include<conio.h>
int main()
{
    long int num;
    int digit,sum=0;
    printf("\n Enter the number to add digits:");
    scanf("%ld",&num);
    while(num>0)
    {
        digit=num%10;
        sum+=digit;
        num=num/10;
    }
    printf("\n The sum of the digits is:%d",sum);
    return 0; 
}
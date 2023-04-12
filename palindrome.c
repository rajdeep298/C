#include<stdio.h>
#include<conio.h>
int main()
{
    long int num,copy,sum=0;
    int digit;
    printf("\n Enter the number to reverse: ");
    scanf("%ld",&num);
    copy=num;
    while(num>0)
    {
        digit=num%10;
        sum=sum*10+digit;
        num=num/10;
    }
    printf("\n The reversed number is:%ld ",sum);
    if(copy==num) printf("\n The number is a palindrome");
    else printf("\n The number is not a palindrome");
    return 0;
}
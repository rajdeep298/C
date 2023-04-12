#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\nEnter the number:");
    scanf("%d", &num);
    if (num%2==0)
    {
        printf("\nThe Number is Even.\n");
    }
    else
    printf("\nThe Number is Odd.\n");
    return 0;
}

/* #include<stdio.h>
#include<conio.h>
int main()
{
    long int fact=1;
    int num,count=1;
    printf("\nEnter the number to find the factorial.\n");
    scanf("%d",&num);
    while(count<num)
    {
        fact*=count;
        ++count;
    }
    printf("\nThe required factorial of %d is :%ld",num,fact);
    return 0;
} */
#include<stdio.h>
#include<conio.h>
int main()
{
    long int fact=1;
    int  num,i;
    printf("\nEnter the number to find the factorial.\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact*=i;
    }
    printf("\nThe required factorial of %d is :%ld",num,fact);
    return 0;
}

/* check whether two inputs are divisable by 7 or not */
#include<stdio.h>
void main()
{
    long int num1,num2;
    printf("\n Enter the number :");
    scanf("%ld%ld",&num1,&num2);
    if(num1%7==0 && num2%7==0)
    {
        printf("\n they are both divisable by 7");
    }
    else{
        printf("\n they are not both divisable by 7 ");
    }
} 
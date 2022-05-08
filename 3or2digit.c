/* to check whether a number has two/three digits or not */
#include<stdio.h>
void main()
{
    long int num;
    int c=0;
    printf("\n Enter the number :");
    scanf("%ld",&num);
    while(num>0)
    {
        num=num/10;
        c++;
    }
    if(c==3 || c==2)
    {
        printf("\n No has three or two  digits ");
    }
    else{
        printf("\n No. dont have two or three digits ");
    }
}
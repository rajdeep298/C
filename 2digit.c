/* to check whether a number has two digits or not*/
#include<stdio.h>
#include<conio.h>
int main()
{
    long int num;
    int c=0;
    printf("\n Enter the number:");
    scanf("%ld",&num);
    while(num>0)
    {
        num=num/10;
        c++;
    }
    if(c==2)
    {
        printf("\n No has two digits");
    }
    else{
        printf("\n No. dont have two digits");
    }
}    

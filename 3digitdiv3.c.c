/* to check whether a number has three digits or not & divisable by 3 */
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
    if(c==3 && c%3==0)
    {
        printf("\n No has three digits & divisable by 3");
    }
    else{
        printf("\n No. dont have two digits & not divisable by 3");
    }
    
}

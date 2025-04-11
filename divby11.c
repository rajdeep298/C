#include<stdio.h>
#include<conio.h>
void main()
{
    long int num;
    int digit,sum1=0,sum2=0,a[10],i,j;
    printf("\n Enter the number to add digits:");
    scanf("%ld",&num);
    i=0;
    while(num>0)
    {
        digit=num%10;
        a[i++]=digit;
        num=num/10;
    }
    for(j=0;j<i;j+=2)
   {
     sum1+=a[j];
   }
   for(j=1;j<i;j+=2)
   {
       sum2+=a[j];
   }
   if(sum2==sum1)
   {
       printf("\nThe number is divisable by 11");
   }
   else
   {
       printf("\nThe number is not divisible by 11");
   }
}

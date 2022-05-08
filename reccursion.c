/* factorial of a number using reccursion */
#include<stdio.h>
int fact(int n) 
{
    if(n==0) 
    return 1;
    else
    {
      return (n*fact(n-1));  
    } 
}
void main()
{
 int n,f=0;
 printf("\n Enter a Number:");
 scanf("%d",&n);
 f= fact(n);
 printf("\n Factorial of %d is:%d",n,f);
}
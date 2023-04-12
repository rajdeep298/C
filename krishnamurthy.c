/* Program to find a Krishnamurthy Number */
#include<stdio.h>
#include<conio.h>
long int factorial(int x);
void main()
{
	int n,num,r,temp=0;
	printf("\n Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n !=0)
    {
      r=n%10;
      num=num+factorial(r);
      n=n/10;
    }
    if (temp == num)
    {
        printf("\n The number %d is a Krishnamurthy Number.",temp);
    }
    else
    {
        printf("\n The number %d is not a Krishnamurthy Number.",temp);
    }
}
long int factorial(int x)
{
    int c=1;
    long int fact=1;
    while(c<=x)
    {
      fact=fact*c;
      c++;
    }
    return fact;
}

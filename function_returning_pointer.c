/*function that returns pointer */
#include<stdio.h>
int *larger(int *x,int *y)
{
    if(*x>*y) return x;
    else return y;
}
void main()
{
  int a=10;
  int b=20;
  int *p;
  p=larger(&a,&b);
  printf("\n Ans:%d",*p);
}
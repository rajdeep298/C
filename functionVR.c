/* function call by argument & refrence */
#include<stdio.h>
void swapA(int a, int b) 
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After swapping two numbers:%d %d\n",a,b);
}
void swapR(int *a, int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void main()
{
   int m,n;
   printf("\n Enter two numbers: ");
   scanf("%d%d",&m,&n);
   swapA(m,n);
   swapR(&m,&n);
   printf("\n After swapping two numbers:%d %d\n",m,n);
}
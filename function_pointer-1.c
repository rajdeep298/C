/*pointer to function pointer */
#include<stdio.h>
int sum(int a, int b)
{
    return a + b;
}
void main()
{
int s=0;
int (*ptr)(int,int)=sum;
s=(*ptr)(2,3);
printf("%d\n",s);
}
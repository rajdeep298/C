#include<stdio.h>
void main() 
{
   int x,m,y,n;
   scanf("%d%d",&x,&y);
   m=x;
   n=y;
   while(m!=n)
   {
      if(m>n)
      m=m-n;
      else
      n=n-m;
   }
}
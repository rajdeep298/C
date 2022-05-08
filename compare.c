/* C PROGRAM TO COMPARE THREE NUMBERS */
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  printf("\n Enter three numbers to find the largest one among them:");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c)
  {
      printf("\n The largest number is: %d\n",a);
  }
  else
  { if(b>c && b>a)
   {
      printf("\n The largest number is: %d\n",b);
   }
  else 
   {
      printf("\n The largest number is: %d\n",c);
   }
  }
  
}
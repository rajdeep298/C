#include<stdio.h>
int  main()
{
   int i,n,a[100];
   printf("\n Enter the number:");
   scanf("%d",&n);
   if(n>0)
   {
   for(i=0;n>0;i++)
   {
      a[i]=n%2;
      n=n/2;
   }
   for(i=i-1;i>=0;i--)
   {
   printf("%d",a[i]);
   }
   }
   else
   {
   for(i=0;n>0;i++)
   {
      a[i]=n%2;
      n=n/2;
   }
   for(i=i-1;i>=0;i--)
   {
   printf("%d",a[i]);
   }
   }
   return 0;   
}
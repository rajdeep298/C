/* 1
   2 3
   4 5 6
   7 8 9 10 */
#include<stdio.h>
#include<conio.h>
void main()
{
       int n,i,j,k=1;
       printf("\n Enter the number of rows:");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=i;j++)
           {
               printf("%d ",k++);
           }
           printf("\n");
       }
}
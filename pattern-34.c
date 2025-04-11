/*
10101
01010
10101
01010
10101 */
#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("\n Enter the number of lines: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
       if(i%2==0)
       {
           k=2;
       for(j=1;j<=n;j++)
       {
              
              printf("%d ",k%2);
              k++;
       }
       }
       else
       {
           k=1;
        for(j=1;j<=n;j++)
       {
              
              printf("%d ",k%2);
              k++;
       }
       }
       printf("\n");
    }
}
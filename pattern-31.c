/*
10101
01010
10101
01010
10101 */
#include<stdio.h>
void main() 
{
    int n,i,j,k;
    printf("\n Enter the number of the lines:");
    scanf("%d",&n);
        k=1;
        printf("\n");
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
              printf("%d",k%2);
              k++;
            }
            printf("\n");
        }
}
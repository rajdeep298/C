/*
10001
01010
00100
01010
10001 */
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("\n Enter the number of lines to print:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || j==(n+1)-i)
            {
                printf("1");
            }
            else printf("0");
        }
        printf("\n");
    }
}
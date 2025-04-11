/*
11011
11011
00000
11011
11011 */
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("\n Enter the number of lines:");
    scanf("%d",&n);
    if(n%2!=0)
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        
        {
            if(i==(n+1)/2 || j==(n+1)/2)
            {
                printf("0");
            }
            else printf("1");
        }
        printf("\n");
    } 
    }
}
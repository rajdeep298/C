/* 
01110
10001
10001
10001
01110 */
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("\n Enter the number of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(j=1;j<=n;j++)
            {
            if(j==1 || j== n)
            {
                printf("0 ");
            }
            else printf("1 "); 
            }
        }
        else
        {
        for(j=1;j<=n;j++)
        {
            if(j==1 || j== n)
            {
                printf("1 ");
            }
            else printf("0 ");
        }
        }
        printf("\n");
    }
}
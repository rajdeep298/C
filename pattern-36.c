/*
12345
23451
34521
45321
54321 */
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("\n Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d",j);
        }
        for(j=i-1;j>=1;j--)
        {
           printf("%d",j);
        }
        printf("\n");
    }
}
/* 
12345
23455
34555
45555
55555 */
#include<stdio.h>
void main()
{
    int m,n,i,j;
    printf("\n Enter the number of rows: ");
    scanf("%d",&m);
    printf("\n Enter the number of columns: ");
    scanf("%d",&n);
    for(i=1;i<=m;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d",j);
        }
        for(j=i;j>1;j--)
        {
            printf("%d",n);
        }
        printf("\n");
    }
}
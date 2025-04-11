/* X-mas tree pattern */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,l,n;
    printf("\n Enter size of the tree: ");
    scanf("%d",&n);
    for(l=1;l<=3;l++)
    {
        for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    } 
    }
    for(i=0;i<=n;i++)
    {
       
        printf(" ");
       
       printf("**\n");
    }
}
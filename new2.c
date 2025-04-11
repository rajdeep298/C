/* C programme to print a hollow diamond in a n:2n-2 box filled with stars */
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j,k,n,l,a=1,m=0,p;
    printf("\n Enter the number of rows:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("*");
        }
        for(k=1;k<=a;k++)
        {
            printf(" ");
        
        }
        a=a+2;
        for(l=i;l>=1;l--)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=1;i<=n;i++)
    {
        m=2*(n-i)+1;
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        
        for(k=1;k<=m;k++)
        {
            printf(" ");
        
        }
        
        for(l=1;l<=i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
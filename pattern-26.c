
/*
Input

Input : 5
Output

1       1
 2     2
  3   3
   4 4
    5
   4 4
  3   3
 2     2
1       1
*/#include<conio.h>
#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    printf("\n Enter the number of the lines to print: ");
    scanf("%d",&n);
    l=1;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" "); 
        }
        for(k=1;k<=2*i-1;k++)
        {
            if(k==1 || k==2*i-1)
            {
            printf("%d",l);
            }
            else printf(" ");
        }
        l++;
        printf("\n");
    }
    l=n-1;
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            if(k==1 || k==2*i-1)
            {
            printf("%d",l);
            }
            else printf(" ");
        }
        l--;
        printf("\n");
    } 
    return 0;
}
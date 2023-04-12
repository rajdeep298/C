/* number pyramid each row starting with number 1*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("\n Enter the number of rows to print:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
          printf(" ");
        }
        for(j=1;j<=i;j++)
        {
          printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
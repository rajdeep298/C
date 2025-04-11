
/*left side height right angle triangle repeated number in a single row*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("\n Enter the numbers of rows to print: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) 
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n"); 
    }
    return 0;
}
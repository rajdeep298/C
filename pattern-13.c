/* pyramid*/
#include<stdio.h>
static const char*s[]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
int main()
{
    int n,i,j,k,l;
    printf("\n Enter the number of the lines to print: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
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
        else
        {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
         for(l=0;l<=2*(i-1);l++)
         {
           printf("%s",s[l]);
         }
         printf("\n");
        }
    } 
    return 0;
}
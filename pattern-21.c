/* Hollow Diamond 
Input: 5

Output:
     *
    * *
   *   *
  *     *
 *       *
  *     *
   *   *
    * *
     *    */
#include<conio.h>
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("\n Enter the number of the lines to print: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            if(k==1 || k==2*i-1)
            {
            printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    } 
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            if(k==1 || k==2*i-1)
            {
            printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    } 
    return 0;
}
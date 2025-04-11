/* inverted of this 
 #include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k;
    printf("\n Enter the lines to print the Pattern:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
           printf("*");
        }
        
        printf("\n");
    }
   return 0;
}*/
/* *
   ** 
   *** 
   **** 
   *****
   ******  */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k;
    printf("\n Enter the lines to print the Pattern:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf("*");
        }
        
        printf("\n");
    }
    
   return 0;
}
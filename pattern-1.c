/*  
    *   
   **  
  *** 
 ****
*****    */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k;
    printf("\n Enter the lines to print the Pattern:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
          printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
   return 0;
}


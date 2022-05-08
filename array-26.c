/* program to print the upper triangle of a square matrix */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],i, j,n,m=1,l,o=1;
    printf("\n Enter the Number of *'s :");
    scanf("%d",&n);
    for(i=1;i<=n && n!=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i && m<=n)
            {
               printf("*");
               m++;
               if(n==m)
               {
                   break;
               }
            }
        }
        printf("\n");
    }
 m=1;
  for(i=1;i<=n && n!=m;i++)
  {
    for(j=1;j<=i;j++)
    {
      m++;
      if(n==m)
      break;
    }
}
 printf("\nOutput:%d",i-2);
}
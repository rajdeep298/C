/* matrix multiplication */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20],m,n,p,q,i,j,k;
    printf("\n Enter the dimension of the first array:");
    scanf("%d%d",&m,&n);
    printf("\n Enter the dimension of the second array:");
    scanf("%d%d",&p,&q);
    if(n==p)
 {
      for( i=1; i<=m; i++)
      {
        for( j=1; j<=n; j++)
        {
           printf("\n Enter the elements of the first array-[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
      }
      printf("\n ---------------------------------------------------");  
      for( i=1; i<=p; i++)
      {
        for( j=1; j<=q; j++)
        {
            printf("\n Enter the elements of the second array-[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
      }
      printf("\n ---------------------------------------------------");  
      printf("\n The  first matrix is:\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     printf("\n ---------------------------------------------------");
     printf("\n The second matrix is:\n");
    for(i=1;i<=p;i++)
    {
        for(j=1;j<=q;j++)
        {
           printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=q;j++)
        {
            c[i][j] =0;
            for(k=1;k<=n;k++)
            {
                c[i][j] +=a[i][k]*b[k][j];
            }
        }
    }
    printf("\n ---------------------------------------------------");
    printf("\n The resulatant matrix is:\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=q;j++)
        {
           printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
 }
 else
 {
     printf("\n The matrix is not compitable for multiplication.");
 }
 return 0;  
}
  
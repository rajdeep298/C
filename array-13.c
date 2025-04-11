/* Check if matrix is an Identity Matrix */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20][20], m,n,i,j,flag=0;
    printf("\n Enter the number of rows and columns:");
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
       {
          printf("\n Enter the elements of the array-[%d][%d]:",i,j);
          scanf("%d",&a[i][j]);
       }
    }
    printf("\n The matrix is:\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
       {
         if((i==j && a[i][j]==1 ) )
         {
             flag=1;
             break;
         }
           if((i!=j && a[i][j]==0 ) )
         {
             flag=1;
             break;
         }
        
       }
    }
    if (flag==1)
    printf("\nThe matrix is an Identity Matrix");
    else
    printf("\n The Matrix is NOT an Identity Matrix");
    return 0;
}
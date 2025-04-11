/* To chcek if the matrix is upper/lower diagonal matrix or not */
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
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
           if(j>=i && a[i][j]!=0)
           {
             flag=1;
             break;
           }
           if(j<i && a[i][j]==0)
           {
               flag=1;
               break;
           }
          if(j<=i && a[i][j]!=0)
           {
             flag=0;
             break;
           }
           if(i>j && a[i][j]==0)
           {
               flag=0;
               break;
           }
        }
       
    }
    if(flag==1)
    {
        printf("\n It is a UPPER TRIANGULAR MATRIX!\n");   
    }
      if(flag==0)
    {
        printf("\n It is NOT a UPPER TRIANGULAR MATRIX!\n");
    }



}
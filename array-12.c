/* Addition of two matrices */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20],p,q,m,n,i,j;
    printf("\n Enter the number of rows and columns of matrices:");
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
       {
          printf("\n Enter the elements of the Matrix-1-[%d][%d]:",i,j);
          scanf("%d",&a[i][j]);
       }
    }
       for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
       {
          printf("\n Enter the elements of the Matrix-2-[%d][%d]:",i,j);
          scanf("%d",&b[i][j]);
       }
    }
    
       for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
       {
        c[i][j]=a[i][j]+b[i][j];
       }
    }  
    printf("\n The Resultant Matrix :\n "); 
      for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
       {
        printf("%d\t",c[i][j]);
       }
        printf("\n");
    }   
    

 return 0;
}
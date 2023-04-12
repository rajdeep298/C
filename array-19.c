/* square matrix multiplication */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10]={0},n,i,j,k;
    printf("\n Enter the dimension of the square matrices: ");
    scanf("%d",&n);
    printf("\n Enter the element of the  first matrix: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\n Enter the element-[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Enter the element of the  second matrix: ");
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\n Enter the element-[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                c[i][j] +=a[i][k]*b[k][j];
            }
        }
    }
    printf("\n The resultant matix is :\n ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}
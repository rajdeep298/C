/* program to print the upper triangle of a square matrix */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],i, j,n;
    printf("\n Enter the dimension ogf the square matrix:");
    scanf("%d",&n);
        
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
       {
          printf("\n Enter the elements of the array-[%d][%d]:",i,j);
          scanf("%d",&a[i][j]);
       }
    }
    printf("\n The Lower Triangular matrix of the given matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<=i)
            {
               printf("%d\t",a[i][j]);
            }
            else
            {
                printf("0\t");
            }
        }
        printf("\n");
    }
}
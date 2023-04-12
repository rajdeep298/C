/* program to print a upper triangular matrix */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20][20]={0},n,i,j;
    printf("\n Enter the dimension of a matrix: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
       {
          if(i<=j)
          {
          printf("\n Enter the elements of the array-[%d][%d]:",i,j);
          scanf("%d",&a[i][j]);
          }
          else
          {
              printf("Rest of the element/s:0||\t");
          }
       }
    }
    printf("\n The matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

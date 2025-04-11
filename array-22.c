/* Program to find the determinant of a 3*3 matrix */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j,a[20][20],det=0;
    for (i = 0;i<3; i++)
    {
        for (j = 0;j<3;j++)
        {
          printf("\n Enter the elements of the array-[%d][%d]:",i,j);
          scanf("%d",&a[i][j]);   
        }
    }
    det=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    printf("\n Determinant of the matrix is:%d",det);
}
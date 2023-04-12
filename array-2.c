/* basic input and output operation in a  matrix*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20][20],p,q,n,i,j;
    printf("\n Enter the number of rows and columns:");
    scanf("%d%d",&p,&q);
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
       {
          printf("\n Enter the elements of the array-[%d][%d]:",i,j);
          scanf("%d",&a[i][j]);
       }
    }
    printf("\n The matrix is:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

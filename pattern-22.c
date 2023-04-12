/* 
55555
54444
54333
54322
54321 */
#include<stdio.h>
void main()
{
 int m,n,i,j,k;
 printf("\n Enter the number of rows:");
 scanf("%d",&n);
for(i=1;i<=n;i++)
{
  for(j=n; j>n-i; j--)
  {
    printf("%d", j);
  }
  
  printf("\n");
}

}
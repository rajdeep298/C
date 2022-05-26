/* Dyanmic Array*/
#include <stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int *base=NULL;
void main() 
{
  
  int *ptr=NULL,n,i;
  printf("\n Enter the number of elements in the array: ");
  scanf("%d",&n);
  base = (int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
    printf("\nEnter the element: ");
    scanf("%d",*(ptr+i));
  }
  printf("\nElements of the array: ");
  for(i=0;i<n;i++)
  {
    printf("\nElements of the array-%d::%d",i,*(ptr+i));
  }
  
}
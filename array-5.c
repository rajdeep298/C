/* reverse the content of an array */
#include<stdio.h>
#include<conio.h>
int main()
{
  int a[20],i,n,j,temp=0;
  printf("\n Enter the number of the elements of the array: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\n Enter the elements of the array-%d:",i);
    scanf("%d",&a[i]);
  }
      for(i=0;i<n;i++)
    {
      printf("\n  The elements of the array are-%d:%d",i,a[i]);
    }
  for(i=0,j=n-1;i<n/2;i++,j--)
  {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp; 
  }
  printf("\n The reversed array is: ");
  for(i=0;i<n;i++)
  {
   printf("\n The elements of the reversed array-%d:%d",i,a[i]);
      
  } 
  return 0;
}
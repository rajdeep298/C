/*  sum of the sqaure of the elements in the array */
#include<stdio.h>
#include<conio.h>
int main()
{
  int a[20],i,n,s=0;
  printf("\n Enter the total number of elements in the array: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     printf("\n Enter element-%d:",i);
     scanf("%d",&a[i]);
     s+=a[i]*a[i]; 
  }
printf("\n The required sum is: %d\n",s);
 return 0;
}
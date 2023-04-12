/* stable sort method */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,flag=0,a[100],t=0;
    printf("\n Enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("\n Enter the elements of the array-%d:",i);
      scanf("%d",&a[i]);
    }
    flag=1;
    for(i=0;i<n && flag==1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
           if(a[j]>a[j+1])
           {
               t=a[j]; 
               a[j]=a[j+1];
               a[j+1]=t;
               flag=1;
           }
        }
    }
    printf("\n The Sorted Array is:");
    for(i=0;i<n;i++)
    {
      printf("\n  The elements of the array are-%d:%d",i,a[i]);
    }
 }
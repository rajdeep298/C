/*  To find the avg of the elemnts of an array */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20], n,i,sum=0;
    float avg;
    printf("\n Enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("\n Enter the elements of the array-%d:",i);
      scanf("%d",&a[i]);
      sum+=a[i];
    }
   avg=sum/n;
   printf("\n The average of number of elements in the array:%.2f",avg);
   return 0;
}
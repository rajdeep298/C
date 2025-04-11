/* deleting value from k-th position */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],n,i,k;
    printf("\n Enter the total number of elements in the array: ");
    scanf("%d",&n);
    for (i=0; i<n; i++) 
    {
        printf("\n Enter the element-%d: ", i);
        scanf("%d",&a[i]);
    }
    printf("\n Enter the position in the array at which to delete the value: ");
    scanf("%d",&k);
    for (i=k; i<n-1; i++)
    {
        a[i] = a[i+1];
    } 
    printf("\n Array after deletion: ");
      for(i=0;i<n-1;i++)
    {
        printf("\n After insertion-%d:%d",i,a[i]);
    }
    return 0;
}
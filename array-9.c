/* selection sort method */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,j,n,temp=0;
    printf("\n Enter the total number of elements in the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter element-%d:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i] = a[j];
                a[j] = temp;

            }
        }
    }
printf("\n After sorting the array:");
    for(i=0;i<n;i++)
    {
        printf("\n After insertion-%d:%d",i,a[i]);
    }
}
/* find the minimum number from a array */
#include<stdio.h>
#include<conio.h>
void main()
{
    int num[20],i,min,n;
    printf("\n Enter the number of the elements of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter Elements-%d:",i);
        scanf("%d",&num[i]);
    }
    min=num[0];
    for(i=0;i<n;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    printf("\n The min value is: %d\n",min);
}
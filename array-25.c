/* find kth maximum number in an array*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,k,t,n,max=0,a[20000],temp;
    printf("\n Enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("\n Enter the elements of the array-%d:",i);
      scanf("%d",&a[i]);
    }
    printf("\n What -th/st/rd maximum number you want to find from the array: ");
    scanf("%d",&k);
    temp=k;
    t=19999;
    while(k!=0)
    {
        max=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>max && t>a[i])
            {
                max=a[i];
            }
        }
        t=max;
        k--;
    }
    printf("\n The %d-th largest number you wanted to find from the array is:%d ",temp,t);
}
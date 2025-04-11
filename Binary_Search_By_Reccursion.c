/* binary search using reccursion  */
#include<stdio.h>
int bin_search(int a[], int l,int u,int key)
{
    int mid;
    mid=(l+u)/2;
    if(a[mid]==key)return mid;
    else if(a[mid]>key)
    {
        bin_search(a, 0, mid-1, key);
    }
    else
    {
        bin_search(a, mid+1,u,key);
    }
}
void main()
{
    int a[20],key,pos, n,i;
    printf("\n Enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("\n Enter the elements of the array-%d:",i);
      scanf("%d",&a[i]);
    }
    printf("\n Enter the element you want to found:");
    scanf("%d",&key);
    pos=bin_search(a,0,n,key);
    printf("\n The Number %d is found in the array in the position:%d",key,pos);
}

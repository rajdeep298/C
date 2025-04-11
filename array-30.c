/* Binary seacrch by pointers*/
#include<stdio.h>
#include<conio.h>
int bin_search(int a[],int l,int u,int key);
void main()
{
    int a[100],n,i,key,pos;
    printf("\n Enter the number of the elements in the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter the element-[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("\n Enter the element to be found: ");
    scanf("%d",&key);
    pos=bin_search(a,0,n,key);
    printf("\n The postion where the element is located:%d",pos);
}
int bin_search(int *a,int l, int u,int key)
{
    int mid;
    mid=(l+u)/2;
    if(a[mid]==key)
    {
        return(mid);
    }
    else if(a[mid]>key)
    {
        bin_search(a,0,mid,key);
    }
    else if(a[mid]<key)
    {
        bin_search(a,mid+1,u,key);
    }
    else
    {
        printf("\n Error:Seacrched element not found");
        return(0);
    }

}
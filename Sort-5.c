/*Merge Sort*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[1000]={0};
int n;
void insert(int n);
void display(int n);
void merge(int l,int mid,int r)
{
    int i,j,k,b[1000],m;
    i=l;
    j=mid+1;
    k=l;
    while(i<=mid && j<=r)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        b[k]=a[i];
        k++;
        i++;
    }
    while(j<=r)
    {
        b[k]=a[j];
        k++;
        j++;
    }
    for(i=l;i<=r;i++)
    {
        a[i]=b[i];
    }
}
void merge_sort(int l,int r)
{
    int mid;
    if(l<r)
    {
        mid=(l+r)/2;
        merge_sort(l,mid);
        merge_sort(mid+1,r);
        merge(l,mid,r);
    }
}
void display(int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("\n Array[%d]:%d",i,a[i]);
    }
}
void insert(int n)
{
    int i;
      for(i=0;i<n;i++)
    {
      printf("\n Enter the elements of the array-%d:",i);
      scanf("%d",&a[i]);
    }
}
void main() 
{
    printf("\nEnter the number of the elements in the array:");
    scanf("%d",&n);
    insert(n);
    display(n);
    printf("\nSorted Array:");
    merge_sort(0,n-1);
    display(n);
}
/*Quick Sort*/
#include<stdio.h>
#include<conio.h>
int a[]={};
int partition(int l,int r);
int Quick_Sort(int l,int r);
void insert(int n);
void display(int n);
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
int partition(int low,int high)
{
    int l=low,r=high;
    int pivot=a[low];
    while(l<r)
    {
        while(pivot>=a[l] && l<=high)
        {
            l++;
        } 
        while(pivot<a[r])
        {
            r--;
        } 
        if(l<r)
        {
            a[l]=a[r]+a[l]-(a[r]=a[l]);
        }
    }
    a[low]=a[low]+a[r]-(a[r]=a[low]);
    return r;
}
int Quick_Sort(int l,int r)
{
    int p;
    if(l<r)
    {
        p=partition(l,r);
        Quick_Sort(l,p-1);
        Quick_Sort(p+1,r);
    }
}
void main()
{
    int n,l,r;
    printf("\nEnter the number of elements in the array:");
    scanf("%d",&r);
    insert(r);
    display(r);
    printf("\nSorted Array: ");
    Quick_Sort(0,r-1);
    display(r);
}
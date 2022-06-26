/*Quick Sort*/
#include<stdio.h>
#include<conio.h>
int a[1000]={0};
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
int partition(int l,int r)
{
    int x=a[0];
    while(l<r)
    {
        while(x>a[l])
        {
            l++;
        } 
        while(x<a[r])
        {
            r--;
        } 
        if(l<r)
        {
            a[l]=a[r]+a[l]-(a[r]=a[l]);
        }
    }
    a[0]=a[0]+a[r]-(a[r]=a[0]);
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
    Quick_Sort(1,r-1);
    display(r);
}
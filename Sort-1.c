/*Modified Bubble sort/Stable Sort*/
#include<stdio.h>
#include<conio.h>
void bubble_sort(int *a,int n);
void insert(int *a,int n);
void display(int *a,int n);
void display(int *a,int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("\n Array[%d]:%d",i,a[i]);
    }
}
void insert(int *a,int n)
{
    int i;
      for(i=0;i<n;i++)
    {
      printf("\n Enter the elements of the array-%d:",i);
      scanf("%d",&a[i]);
    }
}
void bubble_sort(int *a,int n)
{
    int flag=1,i,j,k,n;
    for (i=0;i<n && flag==1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j+1] = a[j]+a[j+1]-(a[j]=a[j+1]);
                flag=1;
            }
        }
    }
}
void main() 
{
    int a[1000],i,j,k,n,flag=1;
    printf("\nEnter the number of the elements in the array: ");
    scanf("%d",&n);
    insert(a,n);
    display(a,n);
    printf("\nSorted array is:");
    bubble_sort(a,n);
    display(a,n);
}
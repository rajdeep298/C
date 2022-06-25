/*Insertion Sort*/
#include<stdio.h>
#include<conio.h>
void insert(int *a,int n);
void display(int *a,int n);
void insertion_sort(int *a,int n);
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
void insertion_sort(int *a,int n)
{
    int i,j,k,temp,ptr;
    for(i=0;i<n;i++)
    {
        temp=a[i];
        ptr=i-1;
        while (temp<a[ptr])
        {
            a[ptr+1]=a[ptr];
            ptr--;
        }
        a[ptr+1]=temp;
    }
}
void main()
{
    int n,a[10000];
    printf("\nEnter the number of the elements in the array:");
    scanf("%d",&n);
    insert(a,n);
    display(a,n);
    printf("\nSorted Array:");
    insertion_sort(a,n);
    display(a,n);
}
/* ************************OUTPUT************************
PS D:\Programming\C> gcc .\Sort-2.c
PS D:\Programming\C> .\a.exe

Enter the number of the elements in the array:6

 Enter the elements of the array-0:15

 Enter the elements of the array-1:12

 Enter the elements of the array-2:10

 Enter the elements of the array-3:18

 Enter the elements of the array-4:6

 Enter the elements of the array-5:9

 Array[0]:15
 Array[1]:12
 Array[2]:10
 Array[3]:18
 Array[4]:6
 Array[5]:9
Sorted Array:
 Array[0]:6
 Array[1]:9
 Array[2]:10
 Array[3]:12
 Array[4]:15
 Array[5]:18*/
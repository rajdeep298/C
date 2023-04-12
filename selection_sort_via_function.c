/*Selection Sort by function*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display(int *a,int n)//displaying the array
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("\n Array[%d]:%d",i,a[i]);
    }
}
void insert(int *a,int n)//inserting element in the array
{
    int i;
      for(i=0;i<n;i++)
    {
      printf("\n Enter the elements of the array-%d:",i);
      scanf("%d",&a[i]);
    }
}
void array_selection_sort(int *a,int n)//selection sort in an array
{
  int i,temp,j;
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
    display(a,n);
}
void main()
{
    int a[50],n;
    system("cls");
    printf("\n Enter the number of elements to be inserted:");
    scanf("%d",&n);
    insert(a,n);
    display(a,n);
    printf("\nThe sorted array is: ");
    array_selection_sort(a,n);
}

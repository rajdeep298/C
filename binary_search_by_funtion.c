/*Binary Search by function  */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void bubble_sort(int *a,int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int iterativeBinarySearch(int *a, int ini, int fin, int key)
{
    int mid;
   while (ini <= fin)
   {
      mid = ini + (fin- ini )/2;
      if (a[mid] == key)
      {
          return mid;
          exit (0);
      }   
      else if (a[mid] < key)
      {
          ini = mid + 1;
      }   
      else
      {
        fin = mid - 1;
      }
         
   }
   return -1;
}
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
void main()
{
    int a[50],n,key,result;
    system("cls");
    printf("\n Enter the number of elements to be inserted:");
    scanf("%d",&n);
    insert(a,n);
    display(a,n);
    bubble_sort(a,n);
    printf("\n Enter the element to be searched:");
    scanf("%d",&key);
    result =  iterativeBinarySearch(a, 0, n-1, key);
    if(result == -1 ) 
    {
      printf("\nElement not found in the array. ");
    }
    else 
    {
      printf("\nElement found at index : %d",result);
    }
}
/*  ********************************OUTPUT********************************

 Enter the number of elements to be inserted:5

 Enter the elements of the array-0:1

 Enter the elements of the array-1:2

 Enter the elements of the array-2:3

 Enter the elements of the array-3:4

 Enter the elements of the array-4:5

 Array[0]:1
 Array[1]:2
 Array[2]:3
 Array[3]:4
 Array[4]:5
 Enter the element to be searched:3

Element found at index : 2
*/
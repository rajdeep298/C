/*Linear and Binary search using functions*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void array_linear_search(int *a,int n);
int array_bin_search(int *a,int l, int u,int key);
void display(int *a,int n);
void insert(int*a,int n);
void display(int *a,int n)//displaying the array
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("\n After insertion-%d:%d",i,a[i]);
    }
}
void insert(int*a,int n)//inserting element in the array
{
    int i;
      for(i=0;i<n;i++)
    {
      printf("\n Enter the elements of the array-%d:",i);
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      printf("\n  The elements of the array are-%d:%d",i,a[i]);
    }
}
void array_linear_search(int *a,int n)// linear search for an element in the array
{
      int i,num,flag=0;
      printf("\n Enter the number to search from the array: "); scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num) 
        {
            printf("\n Value present in position of the array:%d",i);
            flag=1; break;
        }
    }
    if(flag==0)
    {
        printf("\n Value is not present in  the array");
    }
}
int array_bin_search(int *a,int l, int u,int key)// binary_search in an array 

{
    int mid;
    mid=(l+u)/2;
    if(a[mid]==key)
    {
      return(mid);
    }
    else if(a[mid]>key)
    {
      array_bin_search(a,0,mid,key);
    }
    else if(a[mid]<key)
    {
      array_bin_search(a,mid+1,u,key);
    }
    else
    {
      printf("\n Error:Seacrched element not found");
      return(0);
    }
}
void main()
{
    int a[50];
    int i,j,k,l,m,limit,n;
    int choice,num,key,pos;
    char ch;
    printf("\n Enter the number of elements to be inserted:");
    scanf("%d",&n);
    limit=n;
    insert(a,limit);
    start :
    display(a,n);
    printf("\n1 for Linear Search,\n2 for Binary Search ,\n3 to exiting  from the array");
    printf("\n-->>");
    scanf("%d",&choice);
switch(choice)
{
    case 1: printf("\nLinear Search-->>");
            array_linear_search(a,limit);
            break;
    case 2:printf("\n Binary search using pointers:");
            printf("\n Enter the number to be searched for:");
            scanf("%d",&key);
            pos=array_bin_search(a,0,n,key);
            printf("\n The desired element is present in the array at-%d",pos);
            break;
    case 3:break;
    default: printf("\n Wrong input.");                           
}
    printf("\n If you want to continue, press Y or y ");
    printf("\n-->>");
    ch=getch();
    if(ch=='y'|| ch=='Y')
    {
        goto start;
    }
    printf("\n********************End of the process********************");
    printf("\n:)");
}
/*
*************************OUTPUT*************************
PS D:\Programming\C> gcc .\search_using_functions.c
PS D:\Programming\C> .\a.exe

 Enter the number of elements to be inserted:5

 Enter the elements of the array-0:1

 Enter the elements of the array-1:2

 Enter the elements of the array-2:3

 Enter the elements of the array-3:4

 Enter the elements of the array-4:5

  The elements of the array are-0:1
  The elements of the array are-1:2
  The elements of the array are-2:3
  The elements of the array are-3:4
  The elements of the array are-4:5
 After insertion-0:1
 After insertion-1:2
 After insertion-2:3
 After insertion-3:4
 After insertion-4:5
1 for Linear Search,
2 for Binary Search ,
3 to exiting  from the array
-->>1

Linear Search-->>
 Enter the number to search from the array: 3

 Value present in position of the array:2
 If you want to continue, press Y or y 
-->>
 After insertion-0:1
 After insertion-1:2
 After insertion-2:3
 After insertion-3:4
 After insertion-4:5
1 for Linear Search,
2 for Binary Search ,
3 to exiting  from the array
-->>2

 Binary search using pointers:
 Enter the number to be searched for:4

 The desired element is present in the array at-3
 If you want to continue, press Y or y
-->>
********************End of the process********************
:)
*/
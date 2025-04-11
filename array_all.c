/* All basic oprations in an array */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert(int*a,int n);
int ins_kth_ele(int *a,int k,int n);
void display(int *a,int n);
int del_element(int k,int *a,int n);
void max_element(int *a,int n);
void array_selection_sort(int *a,int n);
void array_bubble_sort(int *a,int n);
void array_linear_search(int *a,int n);
void array_duplicate_element(int *a,int n);
void no_of_duplicate_members(int *a,int n);
void min_element(int *a,int n);
void array_stable_sort(int *a,int n); 
void binary_search(int *a,int n);
void element_frequency(int *a,int n);
int array_bin_search(int *a,int l, int u, int key);
void element_frequency(int *a,int n)//Sorting an array using bubble sort & find frequencies of each node
{
      int i=0,k,count=1;
      array_bubble_sort(a,n);
        while(i<n)
        {
           k=*(a+i);
           count=1;
           while(a[i+1]==k)
           {
               count++;
               i++;
           }
           printf("\nFrequency of element-%d is:%d",k,count);
           i++;
        }
}
int array_bin_search(int *a,int l, int u,int key)// binary_search in an array using pointers
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
void array_stable_sort(int *a,int n)// stable sort of the array
{
  int i,j,flag=0,t=0;
      flag=1;
    for(i=0;i<n && flag==1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
           if(a[j]>a[j+1])
           {
               t=a[j]; 
               a[j]=a[j+1];
               a[j+1]=t;
               flag=1;
           }
        }
    }
    display(a,n);
}
void min_element(int *a,int n)// finding min element from the array
{
      int i,min; 
      min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\n The min value is: %d\n",min);
}
void no_of_duplicate_members(int *a,int n)//to Find the number of how many numbers have duplicates
{
  int i,j,c=0;
      for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                  c++;
                  break; 
            }
        }
    }
    printf("\nthe total members who have duplicate members: %d\n",c);
}
void array_duplicate_element(int *a,int n)//Find number the duplicate elements in the array
{
  int i,j,k=0,temp=0;
  array_stable_sort(a,n);
    for(i=0;i<n;i++)
    {
        if(a[i+1]==a[i])
		{
			k++;
			while(a[i+1]==a[i]) i++;
		}
    }
 printf("\n The number of total duplicate elements in the array is:%d",k);
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
void array_bubble_sort(int *a,int n)// bubble sort in the array
{
  int i,j,temp;
      for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    display(a,n);
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
void max_element(int *a,int n)//finding max element of the array
{
  int max,i;
  max=a[0];
  for(i=1;i<n;i++)
  {
    if(a[i]>max)
    {
      max=a[i];
    }
  }
  printf("\n The maximum element in the array is:%d",max);
}
void finding_kth_max_element(int *a,int n)//finding k-th max element in the array
{
  int k,i,t=32767,max,temp;
  printf("\n Enter which-th value to be found from the array:");
  scanf("%d",&k);
  temp=k;
    while(k!=0)
    {
        max=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>max && t>a[i])
            {
                max=a[i];
            }
        }
        t=max;
        k--;
    }
    printf("\n The %d-th largest number you wanted to find from the array is:%d ",temp,t);
}
int ins_kth_ele(int *a,int k,int n)//inserting k-th element
{
    int num,i,j;
    printf("\n Enter the number to be inserted: ");
    scanf("%d",&num);
    for(i=(n-1);i>=k;i--)
    {
        a[i+1]=a[i];
    }
    a[k]=num;
    n++;
    display(a,n);
    return n;
}
void display(int *a,int n)//displaying the array
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("\n After insertion-%d:%d",i,a[i]);
    }
    printf("\n This was output of your chosen opeartion :) .");
}
int del_element(int k,int *a,int n)//for delete an element ,
{
  int i,lock;
  printf("\n Enter the element to delete:");
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
     if(a[i]==k)
     {
       lock =i;
       break;
     }
   }
   while(lock<n-1)
   {
     a[lock]=a[lock+1];
     lock++;
   }
   n--;
   display(a,n);
   return n;
}                                                                                                                                        
void main()
{
    int a[50];
    int i,j,k,l,m,limit,n;
    int choice,num,key,pos;
    char ch;
    system("cls");
    printf("\n Enter the number of elements to be inserted:");
    scanf("%d",&n);
    limit=n;
    insert(a,limit);
    start :
    printf("\n1 for insert a word at kth pos,\n2 for delete an element ,\n3 to find the maximum element from the array,\n4 to find the k-th maximum element from the array,\n5 to Selection sort,\n6 to bubble sort,\n7 to Linear Search,\n8 to Find number the duplicate elements in the array,\n9 to Find the number of how many numbers have duplicates,\n10 to find the minimum number in the array,\n11 to Stable sort,\n12 Binary search using pointers,\n13 Sorting an array using bubble sort & find frequencies of each node,\n14 to exit from the process ");
    printf("\n-->>");
    scanf("%d",&choice);
switch(choice)
{
    case 1: printf("\n Enter the value of k-th pos: ");
               scanf("%d",&k);
               if(k<=n)
               {
                 limit=ins_kth_ele(a,k,n);  
               }
               else
               {
                   printf("\n Wrong input :')");
               }
              break;
    case 2:   limit=del_element(k,a,limit);
              break;
    case 3:   max_element(a,limit);
              break;
    case 4:   finding_kth_max_element(a,limit);
              break;                
    case 5: printf("\n Selection Sort-->>");
            array_selection_sort(a,limit);
            break;
    case 6: printf("\n Bubble Sort-->>");
            array_bubble_sort(a,limit);
            break;
    case 7: printf("\nLinear Search-->>");
            array_linear_search(a,limit);
            break;
    case 8: printf("\nFind number the duplicate elements in the array-->>");
            array_duplicate_element(a,limit);
            break;
    case 9: printf("\nFind the number of how many numbers have duplicates-->>");
            no_of_duplicate_members(a,limit);
            break;
    case 10:printf("\nFind the minimum element from the array-->>");
            min_element(a,limit);
            break;
    case 11:printf("\n Stable sort-->>");
            array_stable_sort(a,limit);
            break;
    case 12:printf("\n Binary search using pointers:");
            printf("\n Enter the number to be searched for:");
            scanf("%d",&key);
            pos=array_bin_search(a,0,n,key);
            printf("\n The desired element is present in the array at-%d",pos);
            break;
    case 13:printf("\nSorting an array using bubble sort & find frequencies of each node:");
             element_frequency(a,limit);
    case 14:break;
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
*************************************************OUTPUT*************************************************
PS D:\Programming\C> gcc array_all.c
PS D:\Programming\C> .\a.exe

 Enter the number of elements to be inserted:5

 Enter the elements of the array-0:56

 Enter the elements of the array-1:23

 Enter the elements of the array-2:89

 Enter the elements of the array-3:12

 Enter the elements of the array-4:7

  The elements of the array are-0:56
  The elements of the array are-1:23
  The elements of the array are-2:89
  The elements of the array are-3:12
  The elements of the array are-4:7
1 for insert a word at kth pos,
2 for delete an element ,
3 to find the maximum element from the array,
4 to find the k-th maximum element from the array,
5 to Selection sort,
6 to bubble sort,
7 to Linear Search,
8 to Find number the duplicate elements in the array,
9 to Find the number of how many numbers have duplicates,
10 to find the minimum number in the array,
11 to Stable sort,
12 Binary search using pointers,
13 Sorting an array using bubble sort & find frequencies of each node,
14 to exit from the process
-->>1//for insert a word at kth pos,

 Enter the value of k-th pos: 3

 Enter the number to be inserted: 456

 After insertion-0:56
 After insertion-1:23
 After insertion-2:89
 After insertion-3:456
 After insertion-4:12
 After insertion-5:7
 This was output of your chosen opeartion :) .
 If you want to continue, press Y or y 
-->>
1 for insert a word at kth pos,
2 for delete an element ,
3 to find the maximum element from the array,
4 to find the k-th maximum element from the array,
5 to Selection sort,
6 to bubble sort,
7 to Linear Search,
8 to Find number the duplicate elements in the array,
9 to Find the number of how many numbers have duplicates,
10 to find the minimum number in the array,
11 to Stable sort,
12 Binary search using pointers,
13 Sorting an array using bubble sort & find frequencies of each node,
14 to exit from the process
-->>2//for delete an element from kth pos,

 Enter the element to delete:456

 After insertion-0:56
 After insertion-1:23
 After insertion-2:89
 After insertion-3:12
 After insertion-4:7
 This was output of your chosen opeartion :) .
 If you want to continue, press Y or y
-->>
1 for insert a word at kth pos,
2 for delete an element ,
3 to find the maximum element from the array,
4 to find the k-th maximum element from the array,
5 to Selection sort,
6 to bubble sort,
7 to Linear Search,
8 to Find number the duplicate elements in the array,
9 to Find the number of how many numbers have duplicates,
10 to find the minimum number in the array,
11 to Stable sort,
12 Binary search using pointers,
13 Sorting an array using bubble sort & find frequencies of each node,
14 to exit from the process
-->>3//to find the maximum element from the array,

 The maximum element in the array is:89
 If you want to continue, press Y or y
-->>
1 for insert a word at kth pos,
2 for delete an element ,
3 to find the maximum element from the array,
4 to find the k-th maximum element from the array,
5 to Selection sort,
6 to bubble sort,
7 to Linear Search,
8 to Find number the duplicate elements in the array,
9 to Find the number of how many numbers have duplicates,
10 to find the minimum number in the array,
11 to Stable sort,
12 Binary search using pointers,
13 Sorting an array using bubble sort & find frequencies of each node,
14 to exit from the process
-->>4//to find the k-th maximum element from the array,

 Enter which-th value to be found from the array:3

 The 3-th largest number you wanted to find from the array is:56
 If you want to continue, press Y or y
-->>5//to Selection sort,

 Selection Sort-->>
 After insertion-0:7
 After insertion-1:12
 After insertion-2:23
 After insertion-3:56
 After insertion-4:89
 This was output of your chosen opeartion :) .
 If you want to continue, press Y or y
-->>
1 for insert a word at kth pos,
2 for delete an element ,
3 to find the maximum element from the array,
4 to find the k-th maximum element from the array,
5 to Selection sort,
6 to bubble sort,
7 to Linear Search,
8 to Find number the duplicate elements in the array,
9 to Find the number of how many numbers have duplicates,
10 to find the minimum number in the array,
11 to Stable sort,
12 Binary search using pointers,
13 Sorting an array using bubble sort & find frequencies of each node,
14 to exit from the process
-->>6//to bubble sort,

 Bubble Sort-->>
 After insertion-0:7
 After insertion-1:12
 After insertion-2:23
 After insertion-3:56
 After insertion-4:89
 This was output of your chosen opeartion :) .
 If you want to continue, press Y or y
-->>
1 for insert a word at kth pos,
2 for delete an element ,
3 to find the maximum element from the array,
4 to find the k-th maximum element from the array,
5 to Selection sort,
6 to bubble sort,
7 to Linear Search,
8 to Find number the duplicate elements in the array,
9 to Find the number of how many numbers have duplicates,
10 to find the minimum number in the array,
11 to Stable sort,
12 Binary search using pointers,
13 Sorting an array using bubble sort & find frequencies of each node,
14 to exit from the process
-->>7//to Linear Search,

Linear Search-->>
 Enter the number to search from the array: 56

 Value present in position of the array:3
 If you want to continue, press Y or y
-->>
********************End of the process********************
:)
PS D:\Programming\C> gcc array_all.c
PS D:\Programming\C> .\a.exe

 Enter the number of elements to be inserted:10

 Enter the elements of the array-0:1

 Enter the elements of the array-1:1

 Enter the elements of the array-2:1

 Enter the elements of the array-3:2

 Enter the elements of the array-4:2

 Enter the elements of the array-5:2

 Enter the elements of the array-6:3

 Enter the elements of the array-7:4

 Enter the elements of the array-8:5

 Enter the elements of the array-9:6

  The elements of the array are-0:1
  The elements of the array are-1:1
  The elements of the array are-2:1
  The elements of the array are-3:2
  The elements of the array are-4:2
  The elements of the array are-5:2
  The elements of the array are-6:3
  The elements of the array are-7:4
  The elements of the array are-8:5
  The elements of the array are-9:6
1 for insert a word at kth pos,
2 for delete an element ,
3 to find the maximum element from the array,
4 to find the k-th maximum element from the array,
5 to Selection sort,
6 to bubble sort,
7 to Linear Search,
8 to Find number the duplicate elements in the array,
9 to Find the number of how many numbers have duplicates,
10 to find the minimum number in the array,
11 to Stable sort,
12 Binary search using pointers,
13 Sorting an array using bubble sort & find frequencies of each node,
14 to exit from the process
-->>8to Find number the duplicate elements in the array,

Find number the duplicate elements in the array-->>
 The number of total duplicate elements in the array is:2
 If you want to continue, press Y or y
-->>
1 for insert a word at kth pos,
2 for delete an element ,
3 to find the maximum element from the array,
4 to find the k-th maximum element from the array,
5 to Selection sort,
6 to bubble sort,
7 to Linear Search,
8 to Find number the duplicate elements in the array,
9 to Find the number of how many numbers have duplicates,
10 to find the minimum number in the array,
11 to Stable sort,
12 Binary search using pointers,
13 Sorting an array using bubble sort & find frequencies of each node,
14 to exit from the process
-->>9//to Find the number of how many numbers have duplicates,

Find the number of how many numbers have duplicates-->>
the total members who have duplicate members: 4

 If you want to continue, press Y or y
-->>
1 for insert a word at kth pos,
2 for delete an element ,
3 to find the maximum element from the array,
4 to find the k-th maximum element from the array,
5 to Selection sort,
6 to bubble sort,
7 to Linear Search,
8 to Find number the duplicate elements in the array,
9 to Find the number of how many numbers have duplicates,
10 to find the minimum number in the array,
11 to Stable sort,
12 Binary search using pointers,
13 Sorting an array using bubble sort & find frequencies of each node,
14 to exit from the process
-->>10// to find the minimum number in the array,

Find the minimum element from the array-->>
 The min value is: 1

 If you want to continue, press Y or y
-->>
********************End of the process********************
:)
PS D:\Programming\C> gcc array_all.c
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
1 for insert a word at kth pos,
2 for delete an element ,
3 to find the maximum element from the array,
4 to find the k-th maximum element from the array,
5 to Selection sort,
6 to bubble sort,
7 to Linear Search,
8 to Find number the duplicate elements in the array,
9 to Find the number of how many numbers have duplicates,
10 to find the minimum number in the array,
11 to Stable sort,
12 Binary search using pointers,
13 Sorting an array using bubble sort & find frequencies of each node,
14 to exit from the process
-->>12//Binary search using pointers,

 Binary search using pointers:
 Enter the number to be searched for:4

 The desired element is present in the array at-3
 If you want to continue, press Y or y
-->>
********************End of the process********************
:)
PS D:\Programming\C> gcc array_all.c
PS D:\Programming\C> .\a.exe

 Enter the number of elements to be inserted:5

 Enter the elements of the array-0:1

 Enter the elements of the array-1:1

 Enter the elements of the array-2:2

 Enter the elements of the array-3:3

 Enter the elements of the array-4:4

  The elements of the array are-0:1
  The elements of the array are-1:1
  The elements of the array are-2:2
  The elements of the array are-3:3
  The elements of the array are-4:4
1 for insert a word at kth pos,
2 for delete an element ,
3 to find the maximum element from the array,
4 to find the k-th maximum element from the array,
5 to Selection sort,
6 to bubble sort,
7 to Linear Search,
8 to Find number the duplicate elements in the array,
9 to Find the number of how many numbers have duplicates,
10 to find the minimum number in the array,
11 to Stable sort,
12 Binary search using pointers,
13 Sorting an array using bubble sort & find frequencies of each node,
14 to exit from the process
-->>13// Sorting an array using bubble sort & find frequencies of each node,

Sorting an array using bubble sort & find frequencies of each node:        
 After insertion-0:1
 After insertion-1:1
 After insertion-2:2
 After insertion-3:3
 After insertion-4:4
 This was output of your chosen opeartion :) .
Frequency of element-1 is:2
Frequency of element-2 is:1
Frequency of element-3 is:1
Frequency of element-4 is:1
 If you want to continue, press Y or y 
-->>
********************End of the process********************
:)
*/
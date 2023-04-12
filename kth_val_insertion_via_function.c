/*Insert a new value at k-th position*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display(int *a,int n);
void ins_kth_ele(int *a,int k,int n);
void insert(int *a,int n);
void ins_kth_ele(int *a,int k,int n)//inserting k-th element
{
    int num,i,j;
    if(k<=n)
    {
    printf("\n Enter the number to be inserted: ");
    scanf("%d",&num);
    for(i=(n-1);i>=k;i--)
    {
        a[i+1]=a[i];
    }
    a[k]=num;
    n++;
    display(a,n);
    }
    else
    {
       printf("\n Wrong input :')");
    }
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
    display(a,n);
}
void main()
{
    int a[50];
    int i,j,k,l,m,limit,n;
    system("cls");
    printf("\n Enter the number of elements to be inserted:");
    scanf("%d",&n);
    insert(a,n);
    printf("\n Enter the value of k-th pos: ");
    scanf("%d",&k);
    ins_kth_ele(a,k,n);         
}
/*   ************************OUTPUT************************

 Enter the number of elements to be inserted:5

 Enter the elements of the array-0:1

 Enter the elements of the array-1:2

 Enter the elements of the array-2:3

 Enter the elements of the array-3:4

 Enter the elements of the array-4:5

 After insertion-0:1
 After insertion-1:2
 After insertion-2:3
 After insertion-3:4
 After insertion-4:5
 Enter the value of k-th pos: 3

 Enter the number to be inserted: 12

 After insertion-0:1
 After insertion-1:2
 After insertion-2:3
 After insertion-3:12
 After insertion-4:4
 After insertion-5:5 */
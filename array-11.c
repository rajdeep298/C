/* Linear search method */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert_and_display(int*a,int n)//inserting element in the array
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
void main()
{
	int a[50];
    int n;
    system("cls");
    printf("\n Enter the number of elements to be inserted:");
    scanf("%d",&n);
	insert_and_display(a,n);
	array_linear_search(a,n);
}
/* ****************************OUTPUT ****************************
 Enter the number of elements to be inserted:5

 Enter the elements of the array-0:12

 Enter the elements of the array-1:23

 Enter the elements of the array-2:34

 Enter the elements of the array-3:45

 Enter the elements of the array-4:56

 Enter the number to search from the array: 34

 Value present in position of the array:2
*/
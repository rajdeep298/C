/* linear search using function */
#include<stdio.h>
#include<conio.h>
int search(int arr[],int key,int n)
{
    int loc,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            loc=i;
            printf("\n Postion of %d in the array:%d",key,loc);
            break;   
        }
    }
}
void main()
{
   int a[20],i,n,loc,key;
    printf("\n Enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("\n Enter the elements of the array-%d:",i);
      scanf("%d",&a[i]);
    }
    printf("\n Enter the number to be serached:");
    scanf("%d",&key);
    loc=search(a,key,n);
}
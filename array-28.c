/*Binary Search using pointers*/
#include<stdio.h>
void search(int *ptr,int a,int b)
{                                                             
    int c;
    for(c=0;c<a;c++)
    {
        if(*(ptr+c) == b)
        {
            printf("\n The wanted element %d is present in: %d.",b,c);
        }
        else
        {
            continue;
        }
    }
}
void main()
{
    int i,*j,a[100],k,n;
    j=a;
    printf("\n Enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("\n Enter the elements of the array-%d:",i);
      scanf("%d",&a[i]);
    }
    printf("\n Enter the value to be searched:");
    scanf("%d",&i);
    search(a,n,i);
}
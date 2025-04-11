/* Bubble sort using Pointers*/
#include<stdio.h>
void main()
{
    int a[20],i,j,n,temp,*ptr;
    ptr=a;
    printf("\n Enter total number of elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("\n Enter element-%d:",i);
      scanf("%d",&a[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }
        }
    }
     for(i=0;i<n;i++)
    {
        printf("\n After Sorting-%d:%d",i,*(ptr+i));
    }
}
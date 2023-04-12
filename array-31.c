/* Bubble sort by function*/
# include<stdio.h>
#include<conio.h>
void bubble_sort(int *a,int n)
{
    int i,j,temp=0,flag=0;
        for(i=0;i<(n-1) &&flag==0;i++)
    {
        for(j=0;j<(n-i-1);j++)
        { 
            flag=1;
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=0;
            }
        }
    }
    
     for(i=0;i<n;i++)
    {
        printf("\n After Sorting-%d:%d",i,a[i]);
    }
}
int main()
{       
    int a[20],i,n;
    printf("\n Enter total number of elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("\n Enter element-%d:",i);
      scanf("%d",&a[i]);
    }
   bubble_sort(a,n);
    return 0;
}
/*  Bubble Sort Method */
# include<stdio.h>
#include<conio.h>
int main()
{       
    int a[20],i,j,n,temp=0;
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
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     for(i=0;i<n;i++)
    {
        printf("\n After Sorting-%d:%d",i,a[i]);
    }
    return 0;
}
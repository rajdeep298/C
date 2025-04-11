/* C program to find the total number of numbers duplicted how many times .*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],b[20],i,j,n,c=0;
    printf("\n Enter the total number of elements in the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter element-%d:",i);
        scanf("%d",&a[i]);
    }
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

 printf("\n The number of total duplicate elements in the array is:%d",c);
 return 0;
}
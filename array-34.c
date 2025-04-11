/* Sorting an array using bubble sort & find frequencies of each node */
#include <stdio.h>
void bubble_sort(int *a,int n)
{
   int i,j,flag=1,temp;
       for(i=0;i<n && flag==1;i++)
       {
           flag=0;
          for(j=0;j<(n-i-1);j++)
          {
             if(*(a+j)>*(a+j+1))
             {
                 temp=*(a+j);
                 *(a+j)=*(a+j+1);
                 *(a+j+1)=temp;
                 flag=1;
             } 
          }
       }
   
}
void element_frequency(int *a,int n)
{
    int i=0,k,count=1;
    
        while(i<n)
        {
           k=*(a+i);
           count=0;
           while(a[i+1]==k)
           {
               count++;
               i++;
           }
           printf("\nFrequency of element-%d is:%d",k,count);
           i++;
        }
    
}
void main()
{
    int a[100],i,n;
    printf("\n Enter the number of elements of the array: ");
    scanf("%d",&n);
    printf("\n Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    printf("\n Now the array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n The array is sorted :)");
    element_frequency(a,n);
}
/* to find the max from a list of numbers  in array*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num[20],i,max,n;
    printf("\n Enter the number of the elements of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter Elements-%d:",i); 
        scanf("%d",&num[i]);
    }
    max=num[0]; 
    for(i=0;i<n;i++)
    {  
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    printf("\n The max value is: %d\n",max);
    return 0;
}
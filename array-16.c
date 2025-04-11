/* C program to find the to total number of duplicate elements in a array. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,j,n,k=0,temp=0;
    printf("\n Enter the total number of elements in the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter element-%d:",i);
        scanf("%d",&a[i]);
    }
       for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i+1]==a[i])
		{
			k++;
			while(a[i+1]==a[i]) i++;
		}
    }
 printf("\n The number of total duplicate elements in the array is:%d",k);
 return 0;
}

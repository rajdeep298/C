/*************************************************************************
10.WAP to perform following actions on an array entered by the user :
1) Remove the duplicates from the array
2) Print the array in reverse order
The program should present a menu to the user and ask for one of the options. The menu
should also include options to re-enter array and to quit the program. */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void  main()
{
    int n,i,j,k,choice,a[20],temp;
    printf("\n Enter 1 for Remove the duplicates from the array, Press 2 for Print the array in reverse order, Press 3 for exit ");
    printf("\n Enter the choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\n Enter the number of elements of an Array:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
          printf("\n Enter the elements of the array-%d:",i);
          scanf("%d",&a[i]);
        }
        for( i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    for(k=j;k<n;k++)
                    {
                       a[k] = a[k+1]; 
                    }
                    n--;
                    j--;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("\n  The elements of the array are-%d:%d",i,a[i]);
        }
        break;
        case 2: 
        printf("\n Enter number of the elements of an Array:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
          printf("\n Enter the elements of the array-%d:",i);
          scanf("%d",&a[i]);
        }
        for(i=0,j=n-1;i<n/2;i++,j--)
        {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
        }
        printf("\n The reversed array is: ");
        for(i=0;i<n;i++)
        {
            printf("\n  The elements of the array are-%d:%d",i,a[i]);
        }
        break;
        case 3: exit(0); break;
        default: printf("\nPlease enter a valid choice :)");
    }
}

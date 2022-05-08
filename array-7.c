/* insertion of a value at k-th position in the array*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],n,i,num,k;
    printf("\n Enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter the element-%d:",i);
        scanf("%d",&a[i]);
    }
    printf("\n Enter the position at which the should be inserted: ");
    scanf("%d",&k);
    printf("\n Enter the number to be inserted: ");
    scanf("%d",&num);
    for(i=(n-1);i>=k;i--)
    {
        a[i+1]=a[i];
    }
    a[k]=num;
    for(i=0;i<=n;i++)
    {
        printf("\n After insertion-%d:%d",i,a[i]);
    }
    return 0;
}

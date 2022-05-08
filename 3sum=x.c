#include<stdio.h>
void main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50},k,j,i,x;
    printf("\n Enter the number to find the  3 addends of if present in the array: ");
    scanf("%d",&x);
    for(int i=1;i<=50;i++)
    {
        for(j=i+1;j<=50;j++)
        {
            for(k=j+1;k<=50;k++)
            {
                if(i+j+k==x)
                {
                    printf("\n The three addends of %d is: %d %d %d ",x,i,j,k);
                }
            }
        }
    }
}
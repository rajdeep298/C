/*
11111
11111
11011
11111
11111 */
#include <stdio.h>
void main()
{
    int i,j,n;
    printf("\n Enter the number of the lines: ");
    scanf("%d",&n);
    if(n%2!=0)
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==(n+1)/2 && j==(n+1)/2)
            {
                printf("0");
            }
            else 
            {printf("1");}   
        }
        printf("\n");
    }
    }
    else
    {
      printf("\n For even input the perfect pattern is not possible.Thank you.");
    }
}
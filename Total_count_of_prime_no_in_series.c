/* find the total count of prime numbers in a series */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,j,m,n,flag,c=0;
printf("\n Enter the maximum and minimum number:");
scanf("%d%d",&m,&n);
for(i=m;i<n;i++)
{
    flag=0;
    for(j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
        {
            flag=1;
        }
    }
    if((flag==0) && i>=2)
    {
        c++;
    }
}
printf("\n Count of prime numbers from %d to %d is :%d",m,n,c);
getch();
}
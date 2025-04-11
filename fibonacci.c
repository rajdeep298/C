#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("%d",sizeof(int));
    long int ft=1,st=1,ct;
    printf("\n Enter the numbers to print: \n");
    scanf("%d",&n);
    printf("\n The Series:\n ");
    if(n==1)
    {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
       printf("1 ");
    }
    if (n>=2)
    {
       printf("1 ");
       printf("1 ");  
    }
    for(i=3;i<=n;i++)
    {
        ct=ft+st;
        printf("%ld ",ct);
        ft=st;
        st=ct;
    }
    return 0;
}
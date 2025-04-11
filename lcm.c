#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,lcm=0,i;
    printf("Enter two numbers...\n");
    scanf("%d%d",&a,&b);
    for(i=(a>b)?a:b;;i++) 
    {
        if(i%a==0&&i%b==0)
        {
            lcm=i;
            break;
        }
    }
    printf("L.C.M is...%d",lcm);
    return 1;
}
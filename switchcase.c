#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int option,check=1;
float a,b,result;
printf("\n Press 1 for Addition. \n Press 2 for Substraction. \n Press 3 for Multiplication. \n Press 4 for Division. \n Press 5 to Exit.");
printf("\n Enter choice:");
scanf("%d",&option);
switch(option)
{
    case 1: printf("\n Enter Two Numbers:");
            scanf("%f%f",&a,&b);
            result = a+b; 
            break;
    case 2: printf("\n Enter Two  Numbers:"); 
            scanf("%f%f",&a,&b);
            if(a>b)
            {
                result=a-b;
            }
            else
            {
                result=b-a;
            }
            break;
    case 3:printf("\n Enter Two Numbers:");
            scanf("%f%f",&a,&b);
            result = a*b; 
            break;
    case 4: printf("\n Enter Two Numbers:");
            scanf("%f%f",&a,&b);
            if (b!=0)
            {
                result=a/b;
            }
    case 5: exit(0);
           break;
    default: printf("\n Enter the correct choice.");                             
}
printf("\nThe result is: %f", result);
}
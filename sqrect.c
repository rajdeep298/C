/* c program to print the area and perimeter of square and rectangle */
#include<stdio.h>
#include<stdlib.h>
void main()
{
int option;
float a,b,c,peri,area;
printf("\n Press 1  square,Press 2 for Rectangle,Press 3 to exit");
printf("\n Enter choice:");
scanf("%d",&option);
switch(option)
{
    case 1: printf("\n Enter the dimension of  side of the Square:");
              scanf("%f",&a);
              peri=4*(a);
              area=a*a;
              break;
    case 2:printf("\n Enter the dimension of  side of the Rectangle:");
              scanf("%f%f",&a,&b);
              peri=2*(a+b);
              area=a*b;
              break;
    case 3: exit(0);
            break;
    default: printf("\n Enter the correct choice"); 
}
printf("\n Dimension of Perimeter and Area of the chosen shape is:%.2f\n%.2f",peri ,area );
}
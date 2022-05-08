/* C program to find the area and the perimeter  of a Triangle, Square, Circle and Rectangle.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>                                                                                                                                             
int main()
{
int option;
float a,b,c,peri,area,s;
printf("\n Press 1 for Triangle,Press 2 for for square,Press 3 for Circle,Press 4 for Rectangle,Press 5 to exit");
printf("\n Enter choice:");
scanf("%d",&option);
switch(option)
{
    case 1: printf("\n Enter the dimensions of three sides of the Triangle:");
              scanf("%f%f%f",&a,&b,&c);
              peri=a+b+c;
              s=peri/2;
              area=sqrt(s*(s-a)*(s-b)*(s-c));
              break;
    case 2: printf("\n Enter the dimension of  side of the Square:");
              scanf("%f",&a);
              peri=4*(a);
              area=a*a;
              break;
    case 3:printf("\n Enter the dimension of radius of the Circle:");
              scanf("%f",&a);
              peri=2*3.14*a;
              area=3.14*a*a;
              break;
    case 4:printf("\n Enter the dimension of  side of the Triangle:");
              scanf("%f%f",&a,&b);
              peri=2*(a+b);
              area=a*b;
              break;
    case 5: exit(0);
            break;
    default: printf("\n Enter the correct choice");                             
}
printf("\n Dimension of Perimeter and Area of the chosen shape is:%.2f\n%.2f",peri ,area );
return 0;
}
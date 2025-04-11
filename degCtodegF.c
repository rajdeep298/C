/* c program to convert celcius to fahrenheit and vice versa */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int c=0,f=0,option;
printf("\n Press 1 to covert Celcius to fahrenheit, Press 2 to convert fahrenheit to Celcius,Press 3 to exit. ");
printf("\n Enter choice:");
scanf("%d",&option);
switch(option)
{
 case 1:printf("\n Enter Temperature in Celcius:");
        scanf("%d",&c); 
        float f=1.8*c+32;
        printf("\n After the Conversion:%.2f°F",f);
        break;
 case 2:printf("\n Enter Temperature in Fahrenheit:");
        scanf("%d",&f);
        float c=0.55555*(f-32);
        printf("\n After the Conversion:%.2f°C",c);
        break;
 case 3:exit(0);
        break;
 default:printf("\n Enter Prefect Choice:");                     
}
}
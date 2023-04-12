/* average of 5 numbers if avg>50 good else bad */
#include<stdio.h>
int main()
{
    float a,b,c,d,e,f=0;
    printf("\n Enter five numbers: ");
    scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);
    f=(a+b+c+d+e)/5;
    if(f>50) 
    {printf("\n Good: ");}
    else {printf("\n Bad: ");}
    return 0;
}
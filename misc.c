#include<stdio.h>
#include<conio.h>
#define PRINT(int) printf("%d",int)
#define PRINT1(x,y,z) printf("x=%d\ty=%d\tz=%d",x,y,z)
void main()
{
    int x=1,y=1,z=1;
    x+=y+=z;
    PRINT(x<y?y:x);
    x=y=z=1; 
    ++x||++y&&++z;
    PRINT1(x,y,z);
    x=y=z=-1;
    ++x&&++y||++z;
    PRINT1(x,y,z);
}
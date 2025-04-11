#include<stdio.h>
void main()
{
    void *ptr=NULL;
    int a=5;
    float f=3.141;
    ptr=&a;
    printf("%d",*ptr);//it is a complete program because we use void pointer in this case.
}

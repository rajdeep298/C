/* ********** tutorial for pointers in C(Sanjoy Sir) ********** */
/* Declaration: detatype *variable name;
1) int *p 2)int* p
P is an integer type pointer 
Pointers are of two types: 
a)Typed: int *p,char *c,float *f;
b)Generic: void *ptr              */
#include<stdio.h>
void main()
{
    int *ptr;// ptr has a adress of 3050
    int a=52;// let say a has a value of 52 and adress 9060
    ptr=&a;//ptr=9060
    printf("%d\n",a);//it will print 52
    printf("%x",&a);//it will print 9060
    printf("%u",ptr);//it will print 9060
    printf("%u\n",&ptr);//it will print 3050
    printf("%d",*ptr);// *ptr indicates the value present in 9060(it means a which has a value of 52 ) so finally it will print 52.
}   
void main()
{
    int *ptr;
    float f=5.27;
    ptr=&f;//it is not correct as we trying to working with a integer pointer and a float address.
} 
// in this case we need Generic pointer
//Ex-
void main()
{
    void *ptr;
    int a=5;
    float f=3.141;
    ptr=&a;
    printf("%d",*ptr);//it is a complete program because we use void pointer in this case.
}
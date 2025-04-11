/* Pointer to the strings*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char *name;
    int length;
    name="Rajdeep";
    char *ptr =name;
    puts(name);
    while(*ptr!='\0')
    {
       printf("\nThe address of %c is sorted at :%x",*ptr,ptr);
       ptr++;    
    }
    length=ptr-name;
    printf("\n The length of the string is:%d",length);
}
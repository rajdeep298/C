/*Format specifiers of charecters in C*/
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    char x='*';
    system("clear");
    printf("\n OUTPUT OF THE CHARECTERS:");
    printf("\n%c\n%3c\n%5c",x,x,x);
    printf("\n----------------------------------------------------------------------");
    char *s="Rajdeep Kundu";
    printf("\n OUTPUT OF THE STRING:\n");
    printf("%14s\n", s);
    printf("%14.10s\n",s);
    printf("%.5s\n",s);
    printf("%-14.5s\n",s);
    printf("%5s\n",s);
    getch();
}
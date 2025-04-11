/* finding the length of a string */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{   char str[100];
    int len ;
    printf("\n Enter a string: ");
    gets(str);
    for(len=0;str[len] != '\0';len++);
    printf(" The number of letters in the string: %d",len);
    return 0;
}
/* c programme to find the string is palindrome or not */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[100],rev[100];
    int i,l=0;
    puts("\n Enter a string: ");
    gets(str);
    for (i=0;str[i]!='\0';i++) 
    {
        l++;
    }
    for(i=l-1;i>=0;i--)
    {
        rev[i++]=str[i];
    }
    rev[i]='\0';
    if(strcmp(str,rev)==0)
    {
        printf("\n The string is palindrome.\n");
    }
    else
    {
        printf("\n The string is not palindrome.\n");
    }
}
/* to convert the first charecter of every word to capital */ 
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,n;
    printf("\n Enter the string:");
    gets(str);
    n=strlen(str);
    for(i=0;str[i]!=0;i++) 
    {
        if((int)str[i]>=97 &&(int)str[i]<=122)
        {
            str[i]-=32;
        }
    }
    printf("\n The new string is: %s\n",str);
    return 0;
} 
/* Reverse a  string using reccursion*/
# include <stdio.h>
#include<string.h>
int revrec(char s[],int i)
{
    static char *ptr;
    ptr=s;
    printf("%c",*(ptr+(i-1)));
    if(i<=1)
    {
        return 0;
    }
    else
    {
        i--;
        revrec(s,i);
    }
}
void main()
{
    static int n;
    char *str="RAJDEEP";
    n=strlen(str);
    revrec(str,n);
}
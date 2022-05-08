/* swapping strings  using strcpy function */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[80],str2[80],temp[80];
    printf("\n Enter the first string:");
    gets(str1);
    printf("\n Enter the second string:");
    gets(str2);
    printf("\n The entere strings are:%s%s",str1,str2);
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("\n The swappes strings are:\n%s\n%s",str1,str2);
    return 0;
}

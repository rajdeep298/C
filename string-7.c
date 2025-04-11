/* joining strings without using strcat function */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[100],str2[200],str3[200];
    int i=0,j=0;
    printf("\n Enter the first string: ");
    gets(str1);
    printf("\n Enter the second string: ");
    gets(str2);
    while(str1[i]!='\0')
    {
        str3[j] = str1[i];
        j++;
        i++;
    }
    i=0;
     while(str2[i]!='\0')
    {
        str3[j] = str2[i];
        j++;
        i++;
    }
    str3[j] = '\0';
    printf("\n The new string is:%s",str3);
    return 0;
}
/* taking a sentence as a input in a string */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100],line[100];
    char str[100]="Rajdeep Kundu";
    printf("\n Enter a string: ");
    scanf("%s",str1);
    printf("\n The first entered string is:%s ",str1);
    printf("\n Enter a second string: ");
    gets(str2);
    printf("\n The second entered string is:%s",str2);
    printf("\n Enter a line of text: ");
    scanf("%[^\n]",line);
    printf("\n The line of text is:%s",line);
    printf("\n The line of text is:%5s",str);
}
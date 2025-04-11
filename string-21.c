/*Compairing a string without using strcmp function*/
#include<stdio.h>
#include<conio.h>
int strcompare(char *s1,char *s2)
{
    int l1=0,l2=0;
    while(*s1!='\0')
    {
       l1++;
       s1 ++;
    }
    while(*s2!='\0')
    {
          l2++;
       s2 ++;
    }
    if(l1!=l2)
    {
       return l1-l2;
    }
    else if(l1==l2)
    {
       while(l1)
       {
           if(*s1!=*s2)
           {
               return(*s1-*s2);
           }
           l1--;
           s1--;
           s2--;
       }
    }
    return (0);
}
void main()
{
    char str1[100],str2[100];
    int n;
    printf("\n Enter the first string:");
    scanf("%s",str1);
    printf("\n Enter the second string:");
    scanf("%s",str2);
    n=strcompare(str1,str2);
    printf("\n Result of the comaparison:%d",n);
}
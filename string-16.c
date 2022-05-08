/* Write a function to find whether a given no. is prime or not. Use the same to generate the
prime numbers less than 100.*/
#include<stdio.h>
#include<string.h>
 void palindrome(char *s,int n)
{
   int i,j,k;
   char rev[100];
   for(i=n-1,j=0;i>=0,j<n;i--,j++)
   {
       rev[j]=s[i];
   }
   rev[j]='\0';
   if(strcmp(s,rev)==0)
   {
       printf("\n Palindrome.");
   }
   else
   {
      printf("\n Not Palindrome.\n");    
   }
}
void main()
{
    int n=0;
    char str[100]; 
    printf("\n Enter the string:");
    gets(str);
    n=strlen(str);
    palindrome(str,n);
}
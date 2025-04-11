/* counting the number of words of a sentence */
#include<stdio.h>
#include<conio.h>
int main()
{
 char str[100];
 int i,count = 0;
 printf("\n Enter a sentence:");
 gets(str);
 for(i=0;str[i]!='\0';i++)
 {
     if(str[i]==' ')
     {
         count++;
     }
 } 
 printf("\n The number of words in the sentence is:%d",count+1);
 return 0;  
}
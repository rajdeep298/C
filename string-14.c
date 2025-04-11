/* program to sort the string alphabetically */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char str[100],temp;
 int i,l,j;
 printf("\n Enter a string:");
 scanf("%s", str);
 for ( i = 0; str[i] != '\0'; i++ )
 {
    if((int)str[i]>=97 &&(int)str[i]<=122)
    {
        str[i]-=32;
    }
 }
l=strlen(str);
for(i=0; i<l-1; i++)
{
    for(j=0; j<l-i-1; j++)
    {
      if(str[j]>str[j+1])
      {
        temp=str[j];
        str[j]=str[j+1];
        str[j+1]=temp;
      }
    }
}
printf("\n The string is: %s\n", str);
return 0;
}

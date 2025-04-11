/* String of pointers*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char *str[4]={"Rajdeep Kundu","is","a","boy."};
    int i=0,j=0,large;
    char *longest;
    for(i=0;i<4;i++)
    {
      printf("%s\n",str[i]);
    }
      large=strlen(str[0]);
      longest=str[0];
    for(i=0;i<4;i++)
    {
      if(strlen(str[i])>large)
      {
        large=strlen(str[i]);
        longest=str[i];
      }
    }
    printf("\nThe longest string is->%s with string length:%d",longest,large); 
    printf("\n---------------------------------");
    for(i=0;i<4;i++)
    {
        for(j=0;*(str[i]+j)!='\0';j++)
        {
           printf("\n The address of %c is:%x",*(str[i]+j),(str[i]+j));
        }
        printf("\n---------------------------------");
    }
}
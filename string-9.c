/* programme to change to first letter of each word in the string */
#include<stdio.h>
#include<conio.h>
int main()
{
    char str[100];
    int i;
    puts("\n Enter a sentence: ");
    gets(str);
    for (i = 0;str[i] != '\0';i++)
    {
        if(str[i-1]== ' '||(int) i == 0 ) 
        {
          if((int)str[i]>=97 &&(int)str[i]<=122)
          {
              str[i]-=32;
          }
        } 
    }
    printf("\n The new string is: %s\n",str);
    return 0;
}
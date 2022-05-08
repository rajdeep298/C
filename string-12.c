/* C programme to delete the letters among the most consecutive positions in the string with using a special charecter*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   char str[50],s[50];
   int i,l=0;
   puts("\n Enter a string: ");gets(str);
   for (i = 0; str[i] != '\0'; i++) 
   {
       if(str[i] == str[i+1])
       {
           str[i+1] = '$';
       }
   }
   printf("The string is now:%s",str);
  for (i = 0; str[i] != '\0'; i++) 
  {
      if(str[i] != '$')
      {
          s[l++] = str[i];
      }
  }
  s[l] = '\0';
  strcpy(str,s);
  printf("\n The string after deletion of repetative element:%s",str); 
}

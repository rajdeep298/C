/*Write a menu driven program to perform following operations on strings:
1) Show address of each character in
string
2) Concatenate two strings without using
strcat function.
3) Concatenate two strings using strcat
function.
4) Compare two strings
5) Calculate length of the string (use
pointers)
6) Convert all lowercase characters to
uppercase
7) Convert all uppercase characters to
lowercase
8) Calculate number of vowels
9) Reverse the string 
10)Exit */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int n,choice,i,j;
    char str1[100],str2[200],str3[200],*ptr,temp;
    printf("\n Press 1) Show address of each character in string,2) Concatenate two strings without using strcat function.3) Concatenate two strings using strcat function. 4) Compare two strings 5) Calculate length of the string (use pointers) 6) Convert all lowercase characters to uppercase 7) Convert all uppercase characters to lowercase 8) Calculate number of vowels 9) Reverse the string.10)Exit. ");
    printf("\n Enter the choice: "); 
    scanf("%d",&choice) ;
    switch(choice)
    {
        case 1: 
        printf("\n Enter a string: ");
        scanf("%s",&str1);
        for(i = 0; str1[i] != '\0'; i++ )
        {
            printf("%p is adress of %c\n",str1[i],str1[i]);
        }
        break;
        case 2:    
         printf("\n Enter the first string: ");
         scanf("%s",&str1);
         printf("\n Enter the second string: ");
         scanf("%s",&str2);
         j=0;
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
              break;

        case 3: 
         printf("\n Enter the first string: ");
         scanf("%s",&str1);
         printf("\n Enter the second string: ");
         scanf("%s",&str2);
         strcat(str1, str2);
         printf("\n The string after Concatenate:%s",str1);
          break;
        case 4: 
         printf("\n Enter the first string: ");
         scanf("%s",&str1);
         printf("\n Enter the second string: ");
         scanf("%s",&str2);
         i=strcmp(str1,str2);
         printf("\n After compairing two strings:%d",i);
          break;
        case 5:
         printf("\n Enter the  string: ");
         scanf("%s",&str1);
         i=0;
         ptr=str1;
         while(*ptr!='\0')
         {
            i++;
            ptr++;
         }
         printf("\n The length of the string:%d",i);
         break;
        case 6:
          printf("\n Enter a string:");
          scanf("%s", str1);
          for ( i = 0; str1[i] != '\0'; i++ )
          {
              if((int)str1[i]>=97 &&(int)str1[i]<=122)
              {
               str1[i]-=32;
              }
          }
          printf("\n After converting all lowercase characters to uppercase:%s",str1);
          break;
        case 7:
            printf("\n Enter a string:");
          scanf("%s", str1);
          for ( i = 0; str1[i] != '\0'; i++ )
          {
              if((int)str1[i]>=65 &&(int)str1[i]<=90)
              {
               str1[i]+=32;
              }
          }
          printf("\n After converting all lowercase characters to uppercase:%s",str1);
          break;
        case 8:
            printf("\n Enter a string:");
          scanf("%s", str1);
          j=0;
          for ( i = 0; str1[i] != '\0'; i++ )
          {
              if((int)str1[i]>=97 &&(int)str1[i]<=122)
              {
               str1[i]-=32;
              }
          }
             for ( i = 0; str1[i] != '\0'; i++ )
             {
                if((int)str1[i]==65 || (int)str1[i]==69 || (int)str1[i]== 73 || (int)str1[i]==79|| (int)str1[i]==85) 
              {
                  j++;
              }
             }
          printf("\n The number of the vowels in the string is: %d\n",j);
          break;
        case 9:
             printf("\n Enter the string: ");
            scanf("%s",str1);
            for ( i=0,j = strlen(str1) - 1 ; i < j ; i++,j--)
            {
               temp = str1[i]; 
	           str1[i] = str1[j]; 
	           str1[j] = temp; 
            }
           printf("\n The reversed string:%s",str1);
           break;
        case 10:exit(0);
             break;
        default:printf("\n Enter the correct choice: ");
          }
        
}
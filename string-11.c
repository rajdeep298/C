/* reversing a string without using another string */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    
    int i,j=0;
    char str[10],temp;
    printf("\n Enter the string: ");
    scanf("%s",str);
    for ( i=0,j = strlen(str) - 1 ; i < j ; i++,j--)
    {
       temp = str[i]; 
	   str[i] = str[j]; 
	   str[j] = temp; 
    }
    printf("\n The reversed string:%s",str);
    return 0;
}

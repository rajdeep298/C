/* to calculate length of multiple  strings */
#include<stdio.h>
#include<conio.h>
int main()
{
 char str[100][100];
 int num,i,len;
 printf("\n Enter the number of words to input: ");
 scanf("%d",&num);
 for(i=0;i<num;i++)
 {
    printf("\n Enter the words-%d:",i);
    scanf("%s",&str[i]);
 }
 for(i=0;i<num;i++)
 {
   for(len=0;str[i][len] !='\0';len++)
   {
    printf("\n Length of the word-%s:%d",str[i],len);
   }
 }
 return 0;
}
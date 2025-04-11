/* WAP that prints a table indicating the number of occurrences of each alphabet in the text
entered as command line arguments.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100],temp;
 int i,l,j,k=1;
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
for(i=0;i<l;i++)
{
    k=1;
    for(j=i+1;j<l;j++)
    {
    if(str[j]==str[i])
	{
		k++;
	}
    }
    if(temp==str[i]) continue;
    temp=str[i];
    printf("\n%c.......%d",str[i],k);   
}
}
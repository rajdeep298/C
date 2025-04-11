#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
int j,i,temp=0,comp,val;
char str[10000];
scanf("%s",str);
for(i=0; i<strlen(str)-1; i++)
{
    for(j=0; j<strlen(str)-i-1; j++)
    {
      if((int)str[j]>(int)str[j+1])
      {
        temp=str[j];
        str[j]=str[j+1];
        str[j+1]=temp;
      }
    }
}
for(i=0;i<=9;i++)
{
    val=i;
    temp=0;
    for(j=0;j<strlen(str);j++)
    {
        if((int)str[j]>=48 && (int)str[j]<=57)
        {
            comp=(int)str[j]-48;  
        if(val==comp) 
        {
            ++temp;
        }
        else
        {
            continue;
        }
        }
    }
    printf("\n%d",temp);
}    
}
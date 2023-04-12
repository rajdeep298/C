/* string sorting function*/
#include<stdio.h>
#include<string.h>
void main() 
{
    char str[100][100],temp[100];
    int i=0,j=0,m,n;
    printf("\n Enter number of  strings:");
    scanf("%d",&n);
    printf("\n Enter %d strings:",n);
    while(i<n)
    {
        scanf("%s",str[i++]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            int value=strcmp(str[j-1],str[j]);
            if(strcmp(str[j],str[j+1])>0)
            {
                strcpy(temp,str[j]);
                strcpy(str[j+1],str[j]);
                strcpy(str[j+1],temp);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n%s",str[i]);
    }

}
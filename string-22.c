/* strncpy strncmp strncat strstr strchr strrchr*/
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[]="Rajdeep";
    char s2[]="Kundu";
    char s3[100];
    printf("\nstrncpy=%s",strncpy(s3,s2,4));
    printf("\nstrncmp=%d",strncmp(s1,s2,3));
    printf("\nstrncat=%s",strncat(s1,s2,3));
    printf("\nstrstr=%d",strchr(s1,'e'));
    if(strchr(s1,'e')==NULL)
    {
        printf("\n E is present");
    }
    else
    {
        printf("\n E is not present");
    } 
}    
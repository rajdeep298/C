/*Opening a file in read mode*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    FILE *fp=NULL;
    char ch; 
    fp=fopen("abc.txt", "r");
    if(fp==NULL)
    {
        printf("\n No such file or directory\n");
        exit(1);
    }
    else
    {
        do
        {
          ch=fgetc(fp);
          printf("%c",ch);
        } while (!feof(fp));
        fclose(fp);
    }
}
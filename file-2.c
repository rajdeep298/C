/*Calculating number of charecters ,words and lines and paste the info in another file*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int cc=0,wc=0,lc=0;
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("abc.txt","r");
    fp2=fopen("xyz.txt","w");
    if(fp1==NULL)
    {
        printf("Error: Cannot open the file 'abc.txt' because it doesn't exist'\n");
        exit(1);
    }
    else
    {
        do
        {
           ch=fgetc(fp1);
           cc++;
           if(ch==' ') wc++;
           if(ch=='\n') lc++;
        } while (!feof(fp1));
        fclose(fp1);
        fprintf(fp2,"➡️No. of the charecters in the file:%d\n",cc);
        fprintf(fp2,"➡️No. of the letters in the file:%d\n",wc+1);
        fprintf(fp2,"➡️No. of the lines in the file:%d",lc);
    }
    fclose(fp2);
}
/*copying a file from one to another using command line arguments */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc, char* argv[]) 
{ 
   FILE *sf=NULL,*df=NULL;
   char ch;
   sf=fopen(argv[2],"r");
   df=fopen(argv[1],"w");
   if(sf==NULL)
   {
       printf("\n Error: Cannot open file because it is not present in the directory\n");
       exit(1);
   }
   else
   do
   {
       fscanf(sf, "%c",&ch);
       fprintf(df,"%c",ch);
   } while (!feof(sf));
   fclose(sf);
   fclose(df);
}
/* Content of Sfile
I am Rajdeep Kundu🙋‍♂️.
I am pursuing Bsc Degree in Computer Science💻 from New Alipore College.
I love travelling🧳.
I love music🎧.
I like to read story books📚 in free time.
Nice to meet you...   */
/* Taking output
  1.Run without debugging the program
  2..\file-3.exe Dfile.txt Sfile.txt*/
/* Final Result(ie copying content of Sfile to Dfile)
->Dfile content/output:
I am Rajdeep Kundu🙋‍♂️.
I am pursuing Bsc Degree in Computer Science💻 from New Alipore College.
I love travelling🧳.
I love music🎧.
I like to read story books📚 in free time.
Nice to meet you...*/  
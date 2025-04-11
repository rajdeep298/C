/* c program to calculate grade of a student */
#include<stdio.h>
void main()
{
    int a;
   printf("\n Enter Marks:");
   scanf("%d",&a);
   if(a<50)
   {
       printf("\n Grade:D");
   }
   else if(a>=50 && a<=69)
   {
       printf("\n Grade:C");
   }
   else if(a>=70 && a<=89)
   {
       printf("\n Grade:B");
   }
   else if(a>=90 && a<=100)
   {
       printf("\n Grade:A");
   }
   
}
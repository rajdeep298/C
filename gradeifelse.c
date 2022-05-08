/* 
Write a C Program using else-if ladder to calculate grade according to marks.

If marks <50 then Grade is F

if marks >=50 <60 then Grade is D

if marks >=60 <70 then Grade is C

if marks >=70 <80 then Grade is B

if marks >=80 <90 then Grade is A

if marks >=90 then Grade is A+ */
#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   printf("\n Enter Marks:");
   scanf("%d",&a);
   if(a<50)
   {
       printf("\n Grade:F");
   }
   else if(a>=50 && a<=60)
   {
       printf("\n Grade:D");
   }
   else if(a>=60 && a<=70)
   {
       printf("\n Grade:C");
   }
   else if(a>=70 && a<=80)
   {
       printf("\n Grade:B");
   }
   else if(a>=80 && a<=90)
   {
       printf("\n Grade:A");
   }
   else if(a>=90 && a<=100)
   {
       printf("\n Grade:A+");
   }
}
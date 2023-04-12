/*Program to evaluate postfix expression*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int push_stack(int *a,int value,int top);
int pop_stack(int *a,int top);
int push_stack(int *a,int value,int top)
{
   if(top>=100)
   {
       printf("\n Stack overflowed");
   }
   else
   {
       top=top+1;
       a[top]=value;
   }
   return top;
}
int pop_stack(int *a,int top)
{
    int value;
    if(top<0)
    {
        printf("\n Stack underflow");
    }
    else
    {
      value=a[top];
      top=top-1;
      printf("\nValue extracted from stack: %d",value);
    }
    return value;
}
void main()
{
   char str[100];
   int a[100];
   int i,j,k,top=-1,opnd1,opnd2,value,push;
   printf("\n Enter a postfix expression: ");
   scanf("%s",str);
   i=0;
   while(*(str+i) != '\0')
   {
      if(*(str+i) != '+' || *(str+i) != '*' || *(str+i) != '-' || *(str+i) != '/'|| *(str+i) != '^')
      {
        push=(char)*(str+i);
        top=push_stack(a,push,top);
      } 
      else if(*(str+i) == '+' || *(str+i) == '*' ||*(str+i) == '-'||*(str+i) == '/'||*(str+i) == '^')
      {
        opnd2=pop_stack(a,top);
        top--;
        opnd1=pop_stack(a,top);
        top--;
        value=opnd1+*(str+i)+opnd2;
        top=push_stack(a,value,top);
      }
      i++; 
   }
   printf("\n The final result:%d",value);
}
/*Postfix Evaluation by Stack*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int top=-1;
int len;
int a[1000]={0};
void push(int value)
{
    if(top>=len-1)
    {
        printf("\n Stack overflow");   
    }
    else
    {
        top++;
        a[top]=value;
    }
}
int pop()
{
    return a[top--];
}
void postfix_evaluation(char *equ)
{
    int i=0,result;
    char ch;
    int num,opnd1,opnd2;
    while(equ[i] != '\0')
    {
        if(equ[i] >='0'&& equ[i] <='9')
        { 
            num=equ[i]-48;
            push(num);
        }
        else
        {
            opnd2=pop();
            opnd1=pop();
            ch=equ[i];
            switch (ch)
            {
            case '+':result=opnd1+opnd2;
                     break;
            case '-':result=opnd1-opnd2;
                     break;
            case '*':result=opnd1*opnd2;
                     break;
            case '/':result=opnd1/opnd2;
                     break;
            case '^':result=pow(opnd1,opnd2);
                     break;
            }
            push(result);
        }
        i++;
    }
    result=pop();
    printf("\n Then Result of the postfix expression is:%d\n", result);
}
void main()
{
    int a[]={0},choice;
    char ch,equ[1000]={'\0'};
    printf("\nEnter the expression to evaluate:");
    gets(equ);
    len=strlen(equ);
    postfix_evaluation(equ);
}
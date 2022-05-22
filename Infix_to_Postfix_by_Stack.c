/* Infix to postfix by Stack*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
char a[1000]={'\0'};
char b[1000]={'\0'};
char c[1000]={'\0'};
int top1=-1;
int top=-1;
int len;
void display_stack(char *ch)
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%c",ch[i]);
    }
}
int priority(char ch)
{
    if (ch == '+' || ch == '-' ) return 1;
    else if(ch=='*' || ch == '/')return 2;
    else if(ch == '^')return 3;
    else return 0;
}
void push(char *ch,int value) 
{
    if(top>=len-1)
    {
        printf("\n Stack overflow");   
    }
    else
    {
        top++;
        ch[top]=value;
    }
}
void push2(char *ch,int value) 
{
    if(top1>=len-1)
    {
        printf("\n Stack overflow");   
    }
    else
    {
        top1++;
        ch[top1]=value;
    }
}
int pop(char *ch)
{
    return ch[top--];
}
char pop2(char *ch)
{
    return ch[top1--];
}
void infix_to_postfix(char *ch)
{
    int i=0,z;
    char c,x;
    while(ch[i]!='\0')
    {
        if(ch[i]>='A' && ch[i]<='z')
        {
            push(b,ch[i]);
        }
        else if(ch[i]=='(' ||ch[i]=='/'||ch[i]=='*' || ch[i]=='+'||ch[i]=='-'||ch[i]=='^')
        {
            push2(a,ch[i]);
        }
        else if(ch[i]==')')
        {
            c=pop2(a);
            while(c!='(')
            {
                if(c!='(' && c!=')')
                {
                    x=c;
                }
                c=pop2(a);
            } 
            push(b,x);
        }
        i++;
    }
    display_stack(b);
}
void main()
{
    int i,j,k;
    char ch[100]={'\0'};
    printf("\nEnter the infix expression: ");
    gets(ch);
    len=strlen(ch);
    infix_to_postfix(ch);
}
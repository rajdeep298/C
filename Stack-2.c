/*Unlimited Stack*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void display_stack();
void push_stack(int n);
void pop_stack();
int top=-1;
int a[]={0};
void display_stack()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("\n Element-%d:%d",i,a[i]);
    }
    printf("\n This was output of your chosen opeartion :) .");
}
void push_stack(int n)
{
   int value;
    top=top+1;
    printf("\n Enter the value to push: ");
    scanf("%d",&value);
    a[top]=value;
   display_stack();
}
void pop_stack()
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
    display_stack();
}
void main()
{
    int choice;
    int n,a[100];
    char ch;
    system("cls");
    start:
    printf("\nPress 1 to PUSH\nPress 2 for POP\nPress 3 for Displaying the Stack\nPress 4 for exit the process.");
    printf("\n-->>");
    scanf("%d",&choice);
switch(choice)
{
    case 1: push_stack(n);
            break;
    case 2: pop_stack();
            break;
    case 3:display_stack();
            break;
    case 4:exit(0);
	       break;
    default: printf("\n Enter the correct choice");                             
}
    printf("\n If you want to continue, press Y or y ");
    printf("\n-->>");
    ch=getch();
    if(ch=='y'|| ch=='Y')
    {
        goto start;
    }
    printf("\n ********************End of the process********************");
    printf("\n:)");
}
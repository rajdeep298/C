/* Push and pop operations of stack. Array Size extension using realloc*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void display_stack();
void push_stack();
void pop_stack();
int top=-1;
int *a=NULL;
void display_stack()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("\n Element-%d:%d",i,a[i]);
    }
    printf("\n This was output of your chosen opeartion :) .");
}
void push_stack()
{
    int value;
    if(a==NULL)
    {
        a=(int*)malloc(sizeof(int));
        printf("\nEnter Value: ");
        scanf("%d",&value);
        a[++top]=value;
    }
    else
    {
        a=realloc(a,sizeof(int));
        printf("\nEnter Value: ");
        scanf("%d",value);
        a[++top]=value;
    }
    display_stack();
}
void pop_stack()
{
    if(a==NULL)
    {
        printf("\nStack Underflow!\n");
    }
    else
    {
        printf("\nValue extracted from stack: %d",a[top]);
        top=top-1;
    }
    if(top<0)
    {
        a=NULL;
    }
}
void main()
{
    int choice;
    int a[100];
    char ch;
    start:
    printf("\nPress 1 to PUSH\nPress 2 for POP\nPress 3 for Displaying the Stack\nPress 4 for exit the process.");
    printf("\n-->>");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: push_stack();
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
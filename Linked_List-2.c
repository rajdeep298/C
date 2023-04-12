/*Stack using Linked List*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node 
{
    int info;
    struct node *next;
};typedef struct node node;
node *start; 
void push_via_linked_list();
void pop_via_linked_list();
void display(); 
node *create_node();
void display()
{
    node *p,*q,*r;
    if(start==NULL)
    {
        printf("\nNo Such element to Display,Stack underflow\n");
    }
    else
    {
        p=start;
        while(p!=NULL)
      {
        printf("\n[Info->%d|Address_of_next_node->(%x)]-->>](address of this node->(%x))---->>>>",p->info,p->next,p);
        p=p->next;
      }
    }
}
void pop_via_linked_list()
{
    node *p,*q,*r;
    if(start==NULL)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        p=start;
        printf("\nThe value extracted from the stack is: %d\n",p->info);
        start=start->next;
    }
    display();
}
void push_via_linked_list()// basically insertion at the beginning of the linked list
{
    node *p,*q,*r;
    p=create_node();
    if(start==NULL)
    {
        start=p;
    }
    else
    {
        p->next=start;
        start=p;
    }
    display();
}
node *create_node()//creates a node.
{
  node*p ;
  p=(node*)malloc(sizeof(node));
  printf("\nEnter the info:");
  scanf("%d",&p->info);
  p->next=NULL;
  return p; 
}
void main()
{
    start = NULL;
    int choice;
    char ch;
    system("cls");
    start:
    printf("\nPress 1 for PUSH(),\nPress 2 for POP(),\nPress 3 for Display,\nPress 4 for Exit the program");
    printf("\nEnter choice:");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:printf("\nPUSH()-->>");
               push_via_linked_list();
               break;
        case 2:printf("\nPOP()-->>");
               pop_via_linked_list();
               break;
        case 3:printf("\nDisplay()-->>");
               display();
               break;
        case 4:printf("\nExiting the process...");
               exit(0);
               break;
        default:printf("\nEnter the correct choice. :(");
    }
    printf("\nIf you want to repeat the process press Y or y");
    printf("\n-->>");
    ch=getch();
    if(ch=='y' || ch=='Y')
    {
        goto start;
    }
    printf("\n ****************************End of the process****************************");
    printf("\n:)");
}
/* *****************************OUTPUT***************************** 

Press 1 for PUSH(),
Press 2 for POP(),
Press 3 for Display,
Press 4 for Exit the program
Enter choice:1

PUSH()-->>
Enter the info:12

[Info->12|Address_of_next_node->(0)]-->>](address of this node->(adba13f0))---->>>>
If you want to repeat the process press Y or y
-->>
Press 1 for PUSH(),
Press 2 for POP(),
Press 3 for Display,
Press 4 for Exit the program
Enter choice:1

PUSH()-->>
Enter the info:23

[Info->23|Address_of_next_node->(adba13f0)]-->>](address of this node->(adba1410))---->>>>
[Info->12|Address_of_next_node->(0)]-->>](address of this node->(adba13f0))---->>>>
If you want to repeat the process press Y or y
-->>
Press 1 for PUSH(),
Press 2 for POP(),
Press 3 for Display,
Press 4 for Exit the program
Enter choice:1
Enter choice:3

Display()-->>
[Info->23|Address_of_next_node->(adba13f0)]-->>](address of this node->(adba1410))---->>>>
[Info->12|Address_of_next_node->(0)]-->>](address of this node->(adba13f0))---->>>>
If you want to repeat the process press Y or y
-->>
 ****************************End of the process****************************
:)
*/
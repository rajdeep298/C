/*Queue using Linked List*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node 
{
    int info;
    struct node *next;
};typedef struct node node;
node*front=NULL;
node*rear=NULL;
node *start; 
node*create_node();
void insertion_in_queue_via_linked_list();
void deletion_in_queue_via_linked_list();
void display_in_queue_via_linked_list();
void display_in_queue_via_linked_list()
{
    node*p,*q;
    if(front==NULL)
    {
        printf("\n No  element in the Queue");
    }
    else
    {
        p=front;
        while(p!=NULL)
      {
        printf("\n[Info->%d|Address_of_next_node->(%x)]-->>](address of this node->(%x))---->>>>",p->info,p->next,p);
        p=p->next;
      }
    }
}
void deletion_in_queue_via_linked_list()
{
    node *p;
    if(rear==NULL)
    {
        printf("\nQueue Underflow :(\n");
    }
    else
    {
        front=p;
        front=front->next;
        printf("\n Value extracted from queue: %d\n", p->info);
        free(p);
    }
    display_in_queue_via_linked_list();
}
void insertion_in_queue_via_linked_list()
{
    node *p;
    p=create_node();
    if(rear==NULL)
    {
        front=p;
        rear=p;
    }
    else
    {
        rear->next=p;
        rear=rear->next;
    }
    display_in_queue_via_linked_list();
}
node *create_node()
{
    node *p;
    p=(node*)malloc(sizeof(node));
    printf("\nEnter info:");
    scanf("%d",&p->info);
    p->next=NULL;
    return(p);
}
void main()
{
    start = NULL;
    int choice;
    char ch;
    system("cls");
    start:
    printf("\nPress 1 for INSERTION,\nPress 2 for DELETION,\nPress 3 for DISPLAY,\nPress 4 for Exit the program");
    printf("\nEnter choice:");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:printf("\nINSERTION-->>");
               insertion_in_queue_via_linked_list();
               break;
        case 2:printf("\nDELETION-->>");
               deletion_in_queue_via_linked_list();
               break;
        case 3:printf("\nDISPLAY-->>");
               display_in_queue_via_linked_list();
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
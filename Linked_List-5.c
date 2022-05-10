/* Circular Linked List */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
  int info;
  struct node *next;
}; typedef struct node node;
node *start;
int count=0;
node*create_first_node();
node*create_other_node();
void display();
void display_checker();
node*create_node()//creates a node.
{
  node*p;
  p=(node*)malloc(sizeof(node));
  printf("\n Enter the info:");
  scanf("%d",&p->info);
  p->next=NULL;
  count++;
  return (p); 
}
void insert_at_end()
{
   node *p,*q;
   if(start==NULL)
   {
       p=create_node();
       start=p;
       p->next=start;
   }
   else
   {
        p=create_node();
        q=start;
        while(q->next!=start)
        {
            q=q->next;
        }
        q->next=p;
        (q->next)->next=start;
   }
    display_checker();
}
void display_2()//displays the linked list.
{
    node*d;
    d=start;
    printf("\n The element into the list:\n");
    printf("[Info->%d|Address_of_next_node->(%x)]-->>](address of this node->(%x))---->>>>\n",d->info,d->next,d);
    d=d->next;
    while(d->next!=start)
    {
    printf("[Info->%d|Address_of_next_node->(%x)]-->>](address of this node->(%x))---->>>>\n",d->info,d->next,d);
    d=d->next;
    }
    printf("[Info->%d|Address_of_next_node->(%x)]-->>](address of this node->(%x))---->>>>\n",d->info,d->next,d);
    d=d->next;
}
void display_1()
{
    node*d;
    d=start;
    printf("\n The element into the list:\n");
    printf("[Info->%d|Address_of_next_node->(%x)]-->>](address of this node->(%x))---->>>>\n",d->info,d->next,d);
    d=d->next;
}
void display_checker()
{
    if(count==1)
    {
        display_1();
    }
    else if(count>=2)
    {
        display_2();
    }
}
void main()
{
    start=NULL;
    printf("Adress of Start:%x\n",start);
    insert_at_end();
    insert_at_end();
    insert_at_end();
    insert_at_end();
}
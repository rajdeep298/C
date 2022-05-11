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
void delete_node(int key);
node*create_first_node();
node*create_other_node();
void delete_first_node();
void insertion_at_end();
void display();
void display_checker();
void backward_traversal();
void insert_after_a_node( int key );
void insert_before_a_node(int key);
void delete_first_node()
{
    node *p,*q,*r;
    if(start==NULL)
    {
        printf("\n Linked List Undefined :(\n");
    }
    else
    {
        q=start;
        r=start;
        while(q->next!=start)
        {
            q=q->next;
        }
        start=start->next;
        q->next=start;
        free(r);
    }
    count--;
    display_checker();
}
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
   p=create_node();
   if(start==NULL)
   {
       start=p;
       p->next=start;
   }
   else
   {
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
void insert_at_beginning()
{
    node *i;
    insert_at_end();
    i=start;
    while(start->next!=i)
    {
        start=start->next;
    }
    count++;
    display_checker();
}
void insert_after_a_node( int key )// inserting node after a desired node
{
   node*p,*q,*r,*s;
   p=create_node();
   if(start==NULL)
   {
       start=p;
   }
   else
   {
       s=start;
       q=s->next;
       if(s->info==key && s->next!=start)
       {
           q=s;
           goto next;
       }
       else if(s->info==key && s->next==start)
       {
           insert_at_end();
           exit(0);
       }
       while(q!=start&& q->info!=key)
       {
           r=q;
           q=q->next;
       }
       if(q!=NULL)
       {
           next:
           p->next=q->next;
           q->next=p;
       }
       else
       {
           r->next=p;
       }
   }
   count++;
   display_checker();
}
void insert_before_a_node(int key)// inserting a node before a desired node
{
    node *p,*q,*r,*s;
    if(start==NULL)
    {
        p=create_node();
        start=p;
    }
    else
    {
        q=start;
        s=start;
        q=s->next;
        if(s->info==key)
        {
           insert_at_beginning();
           exit(0);
        }
        p=create_node();
        while(q!=start && q->info!=key)
        {
            r=q;
            q=q->next;
        } 
        if(q!=NULL)
        {
            next:
            p->next=q;
            r->next=p;
        }
        else
        {
            r->next=p;
        }
    }
    count++;
    display_checker();
}
void delete_node(int key)// delete a desired node from linked list
{
    node*p,*q;
    p=start;
    while(p->info!=key && p!=NULL)
    {
       q=p;
       p=p->next;
    }
    if(p==NULL)
    {
        printf("\n No such node.\n");
    }
    else
    {
        printf("%d is delted",p->info);
        q->next=p->next;
        free(p);
        count--;
        display_checker();
    }

}
void delete_last_node()
{
    node*p,*q,*r;
    if(start==NULL)
    {
        printf("\nLinked List Underflow :(\n");
    }
    else
    {
        q=start;
        while(q->next!=start)
        {
            r=q;
            q=q->next;            
        }
        r->next=start;
        free(q);
        count --;
        display_checker();
    }
}
void backward_traversal()
{
    node*p,*q,*r,*s,*t;
    s=start;
    p=start;
    while(s->next!=start)
    {
        s=s->next;
    }
    s->next=NULL;
    q=p->next;
    p->next=NULL;
    while(q!=NULL)
    {
        r=q->next;
        q->next=p;
        p=q;
        q=r;
    }
    start=p;
    t=start;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=start;
    display_checker();
}
void main()
{
    int key;
    start=NULL;
    printf("\nInsertion of last node-->>");
    insert_at_end();
    printf("\nInsertion of last node-->>");
    insert_at_end();
    printf("\nInsertion of last node-->>");
    insert_at_end();
    printf("\nInsertion of last node-->>");
    insert_at_end();
    printf("\n Insertion at beginning-->>");
    insert_at_beginning();
    printf("\n Enter the info of a node after which you want to insert the new node-->>");
    scanf("%d",&key);
    insert_after_a_node(key);
    printf("\n Enter the info of a node before which you want to insert the new node-->>");
    scanf("%d",&key);
    insert_before_a_node(key);
    printf("\n Deletion if first node-->>");
    delete_first_node();
    printf("\n Enter the number to delete-->>");
    scanf("%d",&key);
    delete_node(key);
    printf("\n Deletion of last node-->>");
    delete_last_node();
    printf("\n Backward Traversal-->>");
    backward_traversal();
}
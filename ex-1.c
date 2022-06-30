/* Basic Operations on Doubly Linked List*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *next,*prev;
};typedef struct node Dnode;// changing name from struct node to node
Dnode *start;
//function prototypes    
void insert_node_at_last(); 
void delete_node(int );
void display();
void insert_at_beginning();
Dnode* Reverse(Dnode* start);
Dnode*create_node();
void insert_after_a_node( int key );
void insert_before_a_node(int key );
void delete_first_node();
void delete_last_node();
void search();
void forward_traversal_of_the_linked_list();
void backward_traversal_of_the_linked_list();
void delete_from_kth_pos();
void delete_from_kth_pos()/////////////////////////
{
    int k,flag;
    Dnode *p,*q=start;
    printf("\nEnter the -th position you want to insert: ");
    scanf("%d",&k);
        while(k!=0)
    {
        if(start==NULL)
        {
            printf("\n No position");
        }
        else
        { 
            q=q->next;
        }
        k--;
    }
    q=q->prev;
    if(q!=NULL)
    {
        p=q->prev;
        p->next=q->next;
        (q->next)->prev=p;
        free(q);
    }
    else
    {
        printf("\nNo such position");
    }
}
void backward_traversal_of_the_linked_list()// for backward traversal in the linked list
{
    Dnode*p,*q,*r;
    p=start;
    q=p->next;
    p->next=NULL;
    p->prev=q;
    while(q!=NULL)
    {
        q->prev=q->next;
        q->next=p;
        p=q;
        q=q->prev;
    }
    start=p;
}    
Dnode* Reverse(Dnode* start)
{
    Dnode*node=start;
    if (!node)
        return NULL;
    Dnode* temp = node->next;
    node->next = node->prev;
    node->prev = temp;
    if (!node->prev)
        {
            return node;
        }
        
    return Reverse(node->prev);
}
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = start;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->info == item)  
            {  
                printf("\nitem found at location %d ",i+1);  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("\nItem not found\n");  
        }  
    }     
          
}  
void create_DLL()
{
    int num;
    printf("\n Input Number of nodes:");
    scanf("%d",&num);
    while(num)
    {
        insert_node_at_last();
        num--;
    }
}
void forward_traversal_of_the_linked_list()//for forward traversal in the linked list
{
    Dnode*q;
    if(start==NULL)
    {
        printf("\n Linked List Underflow.\n");
    }
    else
    {
        display();
    }
}
void insert_at_kth_position()
{
    int k,flag;
    Dnode *p,*q=start;
    printf("\nEnter the -th position you want to insert: ");
    scanf("%d",&k);
    p=create_node();
    while(k!=0)
    {
        if(start==NULL)
        {
            printf("\n No position");
        }
        else
        { 
            q=q->next;
        }
        k--;
    }
    q=q->prev;
    if(q!=NULL)
    {
        p->next=q;
        (q->prev)->next=p;
        p->prev=q->prev;
        q->prev=p;
    }
    else
    {
        printf("\nNo such position");
    }
}
void delete_last_node()// deleting the last node of the linked list
{
    Dnode *p,*q,*r;
    if(start==NULL)
    {
        printf("\n Underflow,No element to delete");
    }
    else
    {
        p=start;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        (p->prev)->next=NULL;
        free(p);
    }
    display();
}
void delete_first_node()// deleting the first node of the linked list
{
    Dnode*q;
    if(start==NULL)
    {
        printf("\n Underflow,No element to delete. :(\n");
    }
    else
    {
        q=start;
        start=q->next;
        start->prev=NULL;
        free(q);
    }
    display();
}
void insert_before_a_node(int key)// inserting a node before a desired node
{
    Dnode *p,*q,*r;
    
    if(start==NULL)
    {
        p=create_node();
        start=p;
    }
    else
    {
        q=start;
        if(q->info==key)
        {
            insert_at_beginning();
            exit(0);
        }
        p=create_node();
        while(q!=NULL && q->info!=key)
        {
            q=q->next;
        } 
        if(q!=NULL)
        {
            p->next=q;
            (q->prev)->next=p;
            p->prev=q->prev;
            q->prev=p;
        }
        else
        {
            r->next=p;
        }
    }
    display();
}
Dnode*create_node()//creates a node.
{
  Dnode*p;
  p=(Dnode*)malloc(sizeof(Dnode));
  printf("\n Enter the info:");
  scanf("%d",&p->info);
  p->next=NULL;
  p->prev=NULL;
  return (p); 
}
void insert_after_a_node( int key )// inserting node after a desired node
{
   Dnode*p,*q,*r;
   p=create_node();
   if(start==NULL)
   {
       start=p;
   }
   else
   {
       q=start;
       while(q!=NULL && q->info!=key)
       {
           r=q;
           q=q->next;
       }
       if(q!=NULL)
       {
           p->next=q->next;
           (q->next)->prev=p;
           q->next=p;
           p->prev=q;
       }
       else
       {
           r->next=p;
       }
   }
   display();
}
void insert_at_beginning()// inserting node at the beginning of the linked list
{
Dnode*p,*q;
p=create_node();
if(start==NULL)
{
    start=p;
}
else
{
    p->next=start;
    start->prev=p;
    start=p;
}
display();
}
void insert_node_at_last()//inserting node at the end of the list
{
    Dnode*p,*q;
    p=create_node();// new node created
    if(start==NULL)
    {
        start=p;
    }
    else
    {
        q=start;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=p;
        p->prev=q;
    }
    display();
}
void delete_node(int key)// delete a desired node from linked list
{
    Dnode*p,*q;
    p=start;
    while(p->info!=key && p!=NULL)
    {
        p=p->next;
    }
    if(p==NULL)
    {
        printf("\n No such node.\n");
    }
    else
    {
        printf("%d is delted",p->info);
        q=p->prev;
        q->next=p->next;
        (p->next)->prev=q;
    }
    free(p);
    display();
}
void display()//displays the linked list.
{
    Dnode*p;
    p=start;
    printf("\n The element into the list:\n");
    while(p!=NULL)
    {
        printf("[Adddress_of_previous_node-%x|Info->%d|Address_of_next_node->(%x)]-->>](address of this node->(%x))---->>>>\n",p->prev,p->info,p->next,p);
        p=p->next;
    }
}
void main() 
{
    start=NULL;
    int num,del,option,key,option2;
    char ch;
    Dnode*new;
    create_DLL();
    start:
    display();
    delete_from_kth_pos();
    display();
}
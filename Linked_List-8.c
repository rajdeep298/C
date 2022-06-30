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
void insert_at_kth_position();
void delete_from_kth_pos();
void delete_from_kth_pos()
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
printf("\nPress 1 for Insertion,\nPress 2 for for Deletion,\nPress 3 for Traversal,\nPress 4 for Display,\nPress 5 for Search,\nPress 6 to exit");
printf("\n Enter choice:");
scanf("%d",&option);
switch(option)
{
    case 1: printf("\n Insertion of nodes-->>");
            printf("\n Press 1 for Insert at the beginning of the list,\nPress 2 for Insert at the end of the list,\nPress 3 for enter after a specific node,\nPress 4 for enter before a specific node,\nPress 5 insert at k-th position,\nPress 6 to exit");
            printf("\n Enter choice:");
            scanf("%d",&option2);
            switch(option2)
            {
                case 1:  printf("\n Enter a node at the beginning of the list");
                         insert_at_beginning();
                         break;
                case 2: printf("\n Enter a node to the last of the list");
                        insert_node_at_last();
                        break;
                case 3:printf("\n Insert after a specific node");
                       printf("\n Enter the info of a node after which you want to insert the new node:");
                       scanf("%d",&key);
                       insert_after_a_node(key);
                       break;
                case 4:printf("\n Insert before a specific node");
                       printf("\n Enter the info of a node before which you want to insert the new node:");
                       scanf("%d",&key);
                       insert_before_a_node(key);
                       break;
                case 5:printf("\nInserting at k-th position");
                       insert_at_kth_position();
                       display();
                       break;
                case 6:break;
                default: printf("\n Enter the correct choice. :(");            
            }
            break;
    case 2: printf("\n Deletion of nodes-->>");
            printf("\n Press 1 for Deleting the first node of the list,\nPress 2 for Deleting the last node of the list,\nPress 3 for Deleting after a specific node,\nPress 4 to delete from k-th position,\nPress 5 to exit");
            printf("\n Enter choice:");            
            scanf("%d",&option2);
            switch(option2)
            {
                case 1:printf("\n Delete the first node in the list");
                       delete_first_node();
                       break;
                case 2:printf("\n Delete the last node in the list");
                       delete_last_node();
                       break;
                case 3: printf("\n Delete a desired node from the list");
                        printf("\n Enter the number to delete: ");
                        scanf("%d",&del);
                        printf("\n  The linked list:");
                        delete_node(del);
                        break;
                case 4:delete_from_kth_pos();
                       display();
                       break;
                case 5:break;
                default: printf("\n Enter the correct choice");   
            }
            break; 
    case 3: printf("\n Traversal in Linked List-->>");
            printf("\nPress 1 for forward tarversal of the linked list,\nPress2 for reverse and tarversal of the linked list");
            printf("\n Enter choice:");
            scanf("%d",&option2);
            switch(option2)
            {
              case 1:printf("\n Forward Traversal:\n");
                    forward_traversal_of_the_linked_list();
                    break;
              case 2:printf("\nPress 1 for reverse and tarversal of the linked list in itterative way,\nPress2 for reverse and tarversal of the linked list in recursive way");
                     printf("\n Enter choice:");
                     scanf("%d",&option2);
                     switch(option2)
                     {
                        case 1:printf("\n Reverse and tarversal in itterative way-->>");
                               backward_traversal_of_the_linked_list();
                               display();
                               break;
                        case 2:printf("\n Reverse and tarversal in recursive way-->>");
                               new=Reverse(start);
                               start=new;
                               display();
                               break;
                        default: printf("\n Enter the correct choice");       
                     }
                     break;
              case 3:break;
              default: printf("\n Enter the correct choice"); 
            }
            break; 
    case 4:printf("\n Display the list");
           display();
           break;
    case 5:printf("\nSearching for a node...");
           search();
           break;
    case 6:exit(0);
           break;       
    default: printf("\n Enter the correct choice"); 
            break;                      
}
printf("\nDo you want you repeat the process\nThen press Y or y.");
printf("\nPress-->>");
ch=getch();
if(ch=='y' || ch=='Y')
{
    goto start;
}
printf("\n ******************************End of the process******************************");
printf("\n :) (: ");
}
/* 
Input Number of nodes:5

 Enter the info:1

 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(0)]-->>](address of this node->(33ff13f0))---->>>>

 Enter the info:2

 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(0)]-->>](address of this node->(33ff1410))---->>>>

 Enter the info:3

 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(0)]-->>](address of this node->(33ff1430))---->>>>

 Enter the info:4

 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(0)]-->>](address of this node->(33ff1450))---->>>>

 Enter the info:5

 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->5|Address_of_next_node->(0)]-->>](address of this node->(33ff1470))---->>>>

 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->5|Address_of_next_node->(0)]-->>](address of this node->(33ff1470))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:1

 Insertion of nodes-->>
 Press 1 for Insert at the beginning of the list,
Press 2 for Insert at the end of the list,
Press 3 for enter after a specific node,
Press 4 for enter before a specific node,
Press 5 insert at k-th position,
Press 6 to exit
 Enter choice:1

 Enter a node at the beginning of the list
 Enter the info:12

 The element into the list:
[Adddress_of_previous_node-0|Info->12|Address_of_next_node->(33ff13f0)]-->>](address of this node->(33ff1490))---->>>>
[Adddress_of_previous_node-33ff1490|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->5|Address_of_next_node->(0)]-->>](address of this node->(33ff1470))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Adddress_of_previous_node-0|Info->12|Address_of_next_node->(33ff13f0)]-->>](address of this node->(33ff1490))---->>>>
[Adddress_of_previous_node-33ff1490|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->5|Address_of_next_node->(0)]-->>](address of this node->(33ff1470))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:1

 Insertion of nodes-->>
 Press 1 for Insert at the beginning of the list,
Press 2 for Insert at the end of the list,
Press 3 for enter after a specific node,
Press 4 for enter before a specific node,
Press 5 insert at k-th position,
Press 6 to exit
 Enter choice:2

 Enter a node to the last of the list
 Enter the info:23

 The element into the list:
[Adddress_of_previous_node-0|Info->12|Address_of_next_node->(33ff13f0)]-->>](address of this node->(33ff1490))---->>>>
[Adddress_of_previous_node-33ff1490|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->5|Address_of_next_node->(33ff14b0)]-->>](address of this node->(33ff1470))---->>>>
[Adddress_of_previous_node-33ff1470|Info->23|Address_of_next_node->(0)]-->>](address of this node->(33ff14b0))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Adddress_of_previous_node-0|Info->12|Address_of_next_node->(33ff13f0)]-->>](address of this node->(33ff1490))---->>>>
[Adddress_of_previous_node-33ff1490|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->5|Address_of_next_node->(33ff14b0)]-->>](address of this node->(33ff1470))---->>>>
[Adddress_of_previous_node-33ff1470|Info->23|Address_of_next_node->(0)]-->>](address of this node->(33ff14b0))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:1

 Insertion of nodes-->>
 Press 1 for Insert at the beginning of the list,
Press 2 for Insert at the end of the list,
Press 3 for enter after a specific node,
Press 4 for enter before a specific node,
Press 5 insert at k-th position,
Press 6 to exit
 Enter choice:3

 Insert after a specific node
 Enter the info of a node after which you want to insert the new node:12

 Enter the info:34

 The element into the list:
[Adddress_of_previous_node-0|Info->12|Address_of_next_node->(33ff14d0)]-->>](address of this node->(33ff1490))---->>>>
[Adddress_of_previous_node-33ff1490|Info->34|Address_of_next_node->(33ff13f0)]-->>](address of this node->(33ff14d0))---->>>>
[Adddress_of_previous_node-33ff14d0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->5|Address_of_next_node->(33ff14b0)]-->>](address of this node->(33ff1470))---->>>>
[Adddress_of_previous_node-33ff1470|Info->23|Address_of_next_node->(0)]-->>](address of this node->(33ff14b0))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Adddress_of_previous_node-0|Info->12|Address_of_next_node->(33ff14d0)]-->>](address of this node->(33ff1490))---->>>>
[Adddress_of_previous_node-33ff1490|Info->34|Address_of_next_node->(33ff13f0)]-->>](address of this node->(33ff14d0))---->>>>
[Adddress_of_previous_node-33ff14d0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->5|Address_of_next_node->(33ff14b0)]-->>](address of this node->(33ff1470))---->>>>
[Adddress_of_previous_node-33ff1470|Info->23|Address_of_next_node->(0)]-->>](address of this node->(33ff14b0))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:1

 Insertion of nodes-->>
 Insertion of nodes-->>
 Press 1 for Insert at the beginning of the list,
Press 2 for Insert at the end of the list,
Press 3 for enter after a specific node,
Press 4 for enter before a specific node,
Press 5 insert at k-th position,
Press 6 to exit
 Enter choice:4

 Insert before a specific node
 Enter the info of a node before which you want to insert the new node:5

 Enter the info:56

 The element into the list:
[Adddress_of_previous_node-0|Info->12|Address_of_next_node->(33ff14d0)]-->>](address of this node->(33ff1490))---->>>>
[Adddress_of_previous_node-33ff1490|Info->34|Address_of_next_node->(33ff13f0)]-->>](address of this node->(33ff14d0))---->>>>
[Adddress_of_previous_node-33ff14d0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff14f0)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->56|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff14f0))---->>>>
[Adddress_of_previous_node-33ff14f0|Info->5|Address_of_next_node->(33ff14b0)]-->>](address of this node->(33ff1470))---->>>>
[Adddress_of_previous_node-33ff1470|Info->23|Address_of_next_node->(0)]-->>](address of this node->(33ff14b0))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Adddress_of_previous_node-0|Info->12|Address_of_next_node->(33ff14d0)]-->>](address of this node->(33ff1490))---->>>>
[Adddress_of_previous_node-33ff1490|Info->34|Address_of_next_node->(33ff13f0)]-->>](address of this node->(33ff14d0))---->>>>
[Adddress_of_previous_node-33ff14d0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff14f0)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->56|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff14f0))---->>>>
[Adddress_of_previous_node-33ff14f0|Info->5|Address_of_next_node->(33ff14b0)]-->>](address of this node->(33ff1470))---->>>>
[Adddress_of_previous_node-33ff1470|Info->23|Address_of_next_node->(0)]-->>](address of this node->(33ff14b0))---->>>>
Do you want you repeat the process
Then press Y or y.
Press-->>
Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:1

 Insertion of nodes-->>
 Press 1 for Insert at the beginning of the list,
Press 2 for Insert at the end of the list,
Press 3 for enter after a specific node,
Press 4 for enter before a specific node,
Press 5 insert at k-th position,
Press 6 to exit
 Enter choice:5

Inserting at k-th position
Enter the -th position you want to insert: 3

 Enter the info:45

 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(756cb0)]-->>](address of this node->(756c90))---->>>>
[Adddress_of_previous_node-756c90|Info->2|Address_of_next_node->(756d30)]-->>](address of this node->(756cb0))---->>>>
[Adddress_of_previous_node-756cb0|Info->45|Address_of_next_node->(756cd0)]-->>](address of this node->(756d30))---->>>>
[Adddress_of_previous_node-756d30|Info->3|Address_of_next_node->(756cf0)]-->>](address of this node->(756cd0))---->>>>
[Adddress_of_previous_node-756cd0|Info->4|Address_of_next_node->(756d10)]-->>](address of this node->(756cf0))---->>>>
[Adddress_of_previous_node-756cf0|Info->5|Address_of_next_node->(0)]-->>](address of this node->(756d10))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:2

 Deletion of nodes-->>
 Press 1 for Deleting the first node of the list,
Press 2 for Deleting the last node of the list,
Press 3 for Deleting after a specific node,
Press 4 to delete from k-th position,
Press 5 to exit
 Enter choice:1

 Delete the first node in the list
 The element into the list:
[Adddress_of_previous_node-0|Info->34|Address_of_next_node->(33ff13f0)]-->>](address of this node->(33ff14d0))---->>>>
[Adddress_of_previous_node-33ff14d0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff14f0)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->56|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff14f0))---->>>>
[Adddress_of_previous_node-33ff14f0|Info->5|Address_of_next_node->(33ff14b0)]-->>](address of this node->(33ff1470))---->>>>
[Adddress_of_previous_node-33ff1470|Info->23|Address_of_next_node->(0)]-->>](address of this node->(33ff14b0))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Adddress_of_previous_node-0|Info->34|Address_of_next_node->(33ff13f0)]-->>](address of this node->(33ff14d0))---->>>>
[Adddress_of_previous_node-33ff14d0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff14f0)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->56|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff14f0))---->>>>
[Adddress_of_previous_node-33ff14f0|Info->5|Address_of_next_node->(33ff14b0)]-->>](address of this node->(33ff1470))---->>>>
[Adddress_of_previous_node-33ff1470|Info->23|Address_of_next_node->(0)]-->>](address of this node->(33ff14b0))---->>>>
Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:2

 Deletion of nodes-->>
 Press 1 for Deleting the first node of the list,
Press 2 for Deleting the last node of the list,
Press 3 for Deleting after a specific node,
Press 4 to delete from k-th position,
Press 5 to exit
 Enter choice:4

Enter the -th position you want to insert: 3

 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(765f1410)]-->>](address of this node->(765f13f0))---->>>>      
[Adddress_of_previous_node-765f13f0|Info->2|Address_of_next_node->(765f1450)]-->>](address of this node->(765f1410))---->>>>
[Adddress_of_previous_node-765f1410|Info->4|Address_of_next_node->(765f1470)]-->>](address of this node->(765f1450))---->>>>
[Adddress_of_previous_node-765f1450|Info->5|Address_of_next_node->(0)]-->>](address of this node->(765f1470))---->>>>      

Do you want you repeat the process
Then press Y or y.
Press-->>
Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:1

 Insertion of nodes-->>
Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:5

 Enter the correct choice. :(
Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Adddress_of_previous_node-0|Info->34|Address_of_next_node->(33ff13f0)]-->>](address of this node->(33ff14d0))---->>>>
[Adddress_of_previous_node-33ff14d0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff14f0)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->56|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff14f0))---->>>>
[Adddress_of_previous_node-33ff14f0|Info->5|Address_of_next_node->(33ff14b0)]-->>](address of this node->(33ff1470))---->>>>
[Adddress_of_previous_node-33ff1470|Info->23|Address_of_next_node->(0)]-->>](address of this node->(33ff14b0))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:2

 Deletion of nodes-->>
 Press 1 for Deleting the first node of the list,
Press 2 for Deleting the last node of the list,
Press 3 for Deleting after a specific node,
Press 4 to exit
 Enter choice:2

 Delete the last node in the list
 The element into the list:
[Adddress_of_previous_node-0|Info->34|Address_of_next_node->(33ff13f0)]-->>](address of this node->(33ff14d0))---->>>>
[Adddress_of_previous_node-33ff14d0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff14f0)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->56|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff14f0))---->>>>
[Adddress_of_previous_node-33ff14f0|Info->5|Address_of_next_node->(0)]-->>](address of this node->(33ff1470))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Adddress_of_previous_node-0|Info->34|Address_of_next_node->(33ff13f0)]-->>](address of this node->(33ff14d0))---->>>>
[Adddress_of_previous_node-33ff14d0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff14f0)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->56|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff14f0))---->>>>
[Adddress_of_previous_node-33ff14f0|Info->5|Address_of_next_node->(0)]-->>](address of this node->(33ff1470))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:2

 Deletion of nodes-->>
 Press 1 for Deleting the first node of the list,
Press 2 for Deleting the last node of the list,
Press 3 for Deleting after a specific node,
Press 4 to exit
 Enter choice:1

 Delete the first node in the list
 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff14f0)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->56|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff14f0))---->>>>
[Adddress_of_previous_node-33ff14f0|Info->5|Address_of_next_node->(0)]-->>](address of this node->(33ff1470))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff14f0)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->56|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff14f0))---->>>>
[Adddress_of_previous_node-33ff14f0|Info->5|Address_of_next_node->(0)]-->>](address of this node->(33ff1470))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:2

 Deletion of nodes-->>
 Press 1 for Deleting the first node of the list,
Press 2 for Deleting the last node of the list,
Press 3 for Deleting after a specific node,
Press 4 to exit
 Enter choice:3

 Delete a desired node from the list
 Enter the number to delete: 56

  The linked list:56 is delted
 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->5|Address_of_next_node->(0)]-->>](address of this node->(33ff1470))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->5|Address_of_next_node->(0)]-->>](address of this node->(33ff1470))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:3

 Traversal in Linked List-->>
Press 1 for forward tarversal of the linked list,
Press2 for backward tarversal of the linked list
 Enter choice:1

 Forward Traversal:

 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->5|Address_of_next_node->(0)]-->>](address of this node->(33ff1470))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->5|Address_of_next_node->(0)]-->>](address of this node->(33ff1470))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:3

 Traversal in Linked List-->>
Press 1 for forward tarversal of the linked list,
Press2 for backward tarversal of the linked list
 Enter choice:2

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:3

 Traversal in Linked List-->>
Press 1 for forward tarversal of the linked list,
Press2 for reverse and tarversal of the linked list
 Enter choice:2

Press 1 for reverse and tarversal of the linked list in itterative way,
Press2 for reverse and tarversal of the linked list in recursive way
 Enter choice:1

 Reverse and tarversal in itterative way-->>
 The element into the list:
[Adddress_of_previous_node-0|Info->5|Address_of_next_node->(9d6cf0)]-->>](address of this node->(9d6d10))---->>>>
[Adddress_of_previous_node-9d6d10|Info->4|Address_of_next_node->(9d6cd0)]-->>](address of this node->(9d6cf0))---->>>>
[Adddress_of_previous_node-9d6cf0|Info->3|Address_of_next_node->(9d6cb0)]-->>](address of this node->(9d6cd0))---->>>>
[Adddress_of_previous_node-9d6cd0|Info->2|Address_of_next_node->(9d6c90)]-->>](address of this node->(9d6cb0))---->>>>
[Adddress_of_previous_node-9d6cb0|Info->1|Address_of_next_node->(0)]-->>](address of this node->(9d6c90))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:3

 Traversal in Linked List-->>
Press 1 for forward tarversal of the linked list,
Press2 for reverse and tarversal of the linked list
 Enter choice:2

Press 1 for reverse and tarversal of the linked list in itterative way,
Press2 for reverse and tarversal of the linked list in recursive way
 Enter choice:2
Reverse and tarversal in recursive way-->>
 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(844dfb20)]-->>](address of this node->(844dfb40))---->>>>
[Adddress_of_previous_node-844dfb40|Info->2|Address_of_next_node->(844dfb00)]-->>](address of this node->(844dfb20))---->>>>
[Adddress_of_previous_node-844dfb20|Info->3|Address_of_next_node->(844dfae0)]-->>](address of this node->(844dfb00))---->>>>
[Adddress_of_previous_node-844dfb00|Info->4|Address_of_next_node->(844dfac0)]-->>](address of this node->(844dfae0))---->>>>
[Adddress_of_previous_node-844dfae0|Info->5|Address_of_next_node->(0)]-->>](address of this node->(844dfac0))---->>>>
 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->5|Address_of_next_node->(0)]-->>](address of this node->(33ff1470))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:4

 Display the list
 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->5|Address_of_next_node->(0)]-->>](address of this node->(33ff1470))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Adddress_of_previous_node-0|Info->1|Address_of_next_node->(33ff1410)]-->>](address of this node->(33ff13f0))---->>>>
[Adddress_of_previous_node-33ff13f0|Info->2|Address_of_next_node->(33ff1430)]-->>](address of this node->(33ff1410))---->>>>
[Adddress_of_previous_node-33ff1410|Info->3|Address_of_next_node->(33ff1450)]-->>](address of this node->(33ff1430))---->>>>
[Adddress_of_previous_node-33ff1430|Info->4|Address_of_next_node->(33ff1470)]-->>](address of this node->(33ff1450))---->>>>
[Adddress_of_previous_node-33ff1450|Info->5|Address_of_next_node->(0)]-->>](address of this node->(33ff1470))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Search,
Press 6 to exit
 Enter choice:5*/

/* Basic opertaions of linked List */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *next;
};typedef struct node node;// changing name from struct node to node
node *start;
//function prototypes    
void insert_node_at_last(); 
void delete_node(int );
void display();
void insert_at_beginning();
node*create_node();
void insert_after_a_node( int key );
void insert_before_a_node(int key );
void delete_first_node();
void delete_last_node();
void forward_traversal_of_the_linked_list();
void backward_traversal_of_the_linked_list();
void backward_traversal_of_the_linked_list()// for backward traversal in the linked list
{
    node *p,*q,*r;
    p=start;
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
    display();
}
void forward_traversal_of_the_linked_list()//for forward traversal in the linked list
{
    node*q;
    if(start==NULL)
    {
        printf("\n No element in the linked list.\n");
    }
    else
    {
        q=start;
        while(q!=NULL)
        {
            printf("[[info->%d|address_of_next_node->(%x)]-->>]address of this node->(%x)]--->>>\n",q->info,q->next,q);
            q=q->next;
        }
    }
}
void delete_last_node()// deleting the last node of the linked list
{
    node *p,*q,*r;
    if(start==NULL)
    {
        printf("\n Underflow,No element to delete");
    }
    else
    {
        p=start;
        while(p->next!=NULL)
        {
            q=p;
            p=p->next;
        }
        q->next=NULL;
        free(p);
    }
    display();
}
void delete_first_node()// deleting the first node of the linked list
{
    node*q;
    if(start==NULL)
    {
        printf("\n Underflow,No element to delete. :(\n");
    }
    else
    {
        q=start;
        start=q->next;
        free(q);
    }
    display();
}
void insert_before_a_node(int key)// inserting a node before a desired node
{
    node *p,*q,*r;
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
            p->next=q;
            r->next=p;
        }
        else
        {
            r->next=p;
        }
    }
    display();
}
node*create_node()//creates a node.
{
  node*p;
  p=(node*)malloc(sizeof(node));
  printf("\n Enter the info:");
  scanf("%d",&p->info);
  p->next=NULL;
  return (p); 
}
void insert_after_a_node( int key )// inserting node after a desired node
{
   node*p,*q,*r;
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
           q->next=p;
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
node*p,*q;
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
void insert_node_at_last()//inserting node at the end of the list
{
    node*p,*q;
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
    }
    display();
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
    }
    free(p);
    display();
}
void display()//displays the linked list.
{
    node*p;
    p=start;
    printf("\n The element into the list:\n");
    while(p!=NULL)
    {
        printf("[Info->%d|Address_of_next_node->(%x)]-->>](address of this node->(%x))---->>>>\n",p->info,p->next,p);
        p=p->next;
    }
}
void main()
{
    start=NULL;
    int num,del,option,key,option2;
    char ch;
    system("cls");
    printf("\n Input Number of nodes:");
    scanf("%d",&num);
    while(num)
    {
        insert_node_at_last();
        num--;
    }
    start:
    display();
printf("\nPress 1 for Insertion,\nPress 2 for for Deletion,\nPress 3 for Traversal,\nPress 4 for Display,\nPress 5 for Exiting the process");
printf("\n Enter choice:");
scanf("%d",&option);
switch(option)
{
    case 1: printf("\n Insertion of nodes-->>");
            printf("\n Press 1 for Insert at the beginning of the list,\nPress 2 for Insert at the end of the list,\nPress 3 for enter after a specific node,\nPress 4 for enter before a specific node,\nPress 5 to exit");
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
                default: printf("\n Enter the correct choice. :(");            
            }
            break;
    case 2: printf("\n Deletion of nodes-->>");
                        printf("\n Press 1 for Deleting the first node of the list,\nPress 2 for Deleting the last node of the list,\nPress 3 for Deleting after a specific node,\nPress 4 to exit");
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
                case 4:break;
                default: printf("\n Enter the correct choice");   
            }
            break; 
    case 3: printf("\n Traversal in Linked List-->>");
            printf("\nPress 1 for forward tarversal of the linked list,\nPress2 for backward tarversal of the linked list");
            printf("\n Enter choice:");
            scanf("%d",&option2);
            switch(option2)
            {
              case 1:printf("\n Forward Traversal:\n");
                    forward_traversal_of_the_linked_list();
                    break;
              case 2:printf("\n Backward Traversal-->>");
                     backward_traversal_of_the_linked_list();
                     break;
              case 3:break;
              default: printf("\n Enter the correct choice"); 
            }
            break; 
    case 4:printf("\n Display the list");
           display();
           break;
    case 5:exit(0);
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
/*************************************OUTPUT************************************

 Input Number of nodes:5

 Enter the info:1

 The element into the list:
[Info->1|Address_of_next_node->(0)]-->>](address of this node->(23613f0))---->>>>

 Enter the info:2

 The element into the list:
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(0)]-->>](address of this node->(2361410))---->>>>

 Enter the info:3

 The element into the list:
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(2361430)]-->>](address of this node->(2361410))---->>>>
[Info->3|Address_of_next_node->(0)]-->>](address of this node->(2361430))---->>>>

 Enter the info:4

 The element into the list:
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(2361430)]-->>](address of this node->(2361410))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(0)]-->>](address of this node->(2361450))---->>>>

 Enter the info:5

 The element into the list:
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(2361430)]-->>](address of this node->(2361410))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(2361470)]-->>](address of this node->(2361450))---->>>>
[Info->5|Address_of_next_node->(0)]-->>](address of this node->(2361470))---->>>>

 The element into the list:
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(2361430)]-->>](address of this node->(2361410))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(2361470)]-->>](address of this node->(2361450))---->>>>
[Info->5|Address_of_next_node->(0)]-->>](address of this node->(2361470))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Exiting the process
 Enter choice:1

 Insertion of nodes-->>
 Press 1 for Insert at the beginning of the list,
Press 2 for Insert at the end of the list,
Press 3 for enter after a specific node,
Press 4 for enter before a specific node,
Press 5 to exit
 Enter choice:1

 Enter a node at the beginning of the list
 Enter the info:12

 The element into the list:
[Info->12|Address_of_next_node->(23613f0)]-->>](address of this node->(2361490))---->>>>
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(2361430)]-->>](address of this node->(2361410))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(2361470)]-->>](address of this node->(2361450))---->>>>
[Info->5|Address_of_next_node->(0)]-->>](address of this node->(2361470))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Info->12|Address_of_next_node->(23613f0)]-->>](address of this node->(2361490))---->>>>
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(2361430)]-->>](address of this node->(2361410))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(2361470)]-->>](address of this node->(2361450))---->>>>
[Info->5|Address_of_next_node->(0)]-->>](address of this node->(2361470))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Exiting the process
 Enter choice:1

 Insertion of nodes-->>
 Press 1 for Insert at the beginning of the list,
Press 2 for Insert at the end of the list,
Press 3 for enter after a specific node,
Press 4 for enter before a specific node,
Press 5 to exit
 Enter choice:2

 Enter a node to the last of the list
 Enter the info:23

 The element into the list:
[Info->12|Address_of_next_node->(23613f0)]-->>](address of this node->(2361490))---->>>>
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(2361430)]-->>](address of this node->(2361410))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(2361470)]-->>](address of this node->(2361450))---->>>>
[Info->5|Address_of_next_node->(23614b0)]-->>](address of this node->(2361470))---->>>>
[Info->23|Address_of_next_node->(0)]-->>](address of this node->(23614b0))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Info->12|Address_of_next_node->(23613f0)]-->>](address of this node->(2361490))---->>>>
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(2361430)]-->>](address of this node->(2361410))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(2361470)]-->>](address of this node->(2361450))---->>>>
[Info->5|Address_of_next_node->(23614b0)]-->>](address of this node->(2361470))---->>>>
[Info->23|Address_of_next_node->(0)]-->>](address of this node->(23614b0))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Exiting the process
 Enter choice:1

 Insertion of nodes-->>
 Press 1 for Insert at the beginning of the list,
Press 2 for Insert at the end of the list,
Press 3 for enter after a specific node,
Press 4 for enter before a specific node,
Press 5 to exit
 Enter choice:3

 Insert after a specific node
 Enter the info of a node after which you want to insert the new node:2

 Enter the info:34

 The element into the list:
[Info->12|Address_of_next_node->(23613f0)]-->>](address of this node->(2361490))---->>>>
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(23614d0)]-->>](address of this node->(2361410))---->>>>
[Info->34|Address_of_next_node->(2361430)]-->>](address of this node->(23614d0))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(2361470)]-->>](address of this node->(2361450))---->>>>
[Info->5|Address_of_next_node->(23614b0)]-->>](address of this node->(2361470))---->>>>
[Info->23|Address_of_next_node->(0)]-->>](address of this node->(23614b0))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Info->12|Address_of_next_node->(23613f0)]-->>](address of this node->(2361490))---->>>>
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(23614d0)]-->>](address of this node->(2361410))---->>>>
[Info->34|Address_of_next_node->(2361430)]-->>](address of this node->(23614d0))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(2361470)]-->>](address of this node->(2361450))---->>>>
[Info->5|Address_of_next_node->(23614b0)]-->>](address of this node->(2361470))---->>>>
[Info->23|Address_of_next_node->(0)]-->>](address of this node->(23614b0))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Exiting the process
 Enter choice:1

 Insertion of nodes-->>
 Press 1 for Insert at the beginning of the list,
Press 2 for Insert at the end of the list,
Press 3 for enter after a specific node,
Press 4 for enter before a specific node,
Press 5 to exit
 Enter choice:4

 Insert before a specific node
 Enter the info of a node before which you want to insert the new node:5

 Enter the info:45

 The element into the list:
[Info->12|Address_of_next_node->(23613f0)]-->>](address of this node->(2361490))---->>>>
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(23614d0)]-->>](address of this node->(2361410))---->>>>
[Info->34|Address_of_next_node->(2361430)]-->>](address of this node->(23614d0))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(23614f0)]-->>](address of this node->(2361450))---->>>>
[Info->45|Address_of_next_node->(2361470)]-->>](address of this node->(23614f0))---->>>>
[Info->5|Address_of_next_node->(23614b0)]-->>](address of this node->(2361470))---->>>>
[Info->23|Address_of_next_node->(0)]-->>](address of this node->(23614b0))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Info->12|Address_of_next_node->(23613f0)]-->>](address of this node->(2361490))---->>>>
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(23614d0)]-->>](address of this node->(2361410))---->>>>
[Info->34|Address_of_next_node->(2361430)]-->>](address of this node->(23614d0))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(23614f0)]-->>](address of this node->(2361450))---->>>>
[Info->45|Address_of_next_node->(2361470)]-->>](address of this node->(23614f0))---->>>>
[Info->5|Address_of_next_node->(23614b0)]-->>](address of this node->(2361470))---->>>>
[Info->23|Address_of_next_node->(0)]-->>](address of this node->(23614b0))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Exiting the process
 Enter choice:2

 Deletion of nodes-->>
 Press 1 for Deleting the first node of the list,
Press 2 for Deleting the last node of the list,
Press 3 for Deleting after a specific node,
Press 4 to exit
 Enter choice:1

 Delete the first node in the list
 The element into the list:
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(23614d0)]-->>](address of this node->(2361410))---->>>>
[Info->34|Address_of_next_node->(2361430)]-->>](address of this node->(23614d0))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(23614f0)]-->>](address of this node->(2361450))---->>>>
[Info->45|Address_of_next_node->(2361470)]-->>](address of this node->(23614f0))---->>>>
[Info->5|Address_of_next_node->(23614b0)]-->>](address of this node->(2361470))---->>>>
[Info->23|Address_of_next_node->(0)]-->>](address of this node->(23614b0))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(23614d0)]-->>](address of this node->(2361410))---->>>>
[Info->34|Address_of_next_node->(2361430)]-->>](address of this node->(23614d0))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(23614f0)]-->>](address of this node->(2361450))---->>>>
[Info->45|Address_of_next_node->(2361470)]-->>](address of this node->(23614f0))---->>>>
[Info->5|Address_of_next_node->(23614b0)]-->>](address of this node->(2361470))---->>>>
[Info->23|Address_of_next_node->(0)]-->>](address of this node->(23614b0))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Exiting the process
 Enter choice:2

 Deletion of nodes-->>
 Press 1 for Deleting the first node of the list,
Press 2 for Deleting the last node of the list,
Press 3 for Deleting after a specific node,
Press 4 to exit
 Enter choice:2

 Delete the last node in the list
 The element into the list:
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(23614d0)]-->>](address of this node->(2361410))---->>>>
[Info->34|Address_of_next_node->(2361430)]-->>](address of this node->(23614d0))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(23614f0)]-->>](address of this node->(2361450))---->>>>
[Info->45|Address_of_next_node->(2361470)]-->>](address of this node->(23614f0))---->>>>
[Info->5|Address_of_next_node->(0)]-->>](address of this node->(2361470))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(23614d0)]-->>](address of this node->(2361410))---->>>>
[Info->34|Address_of_next_node->(2361430)]-->>](address of this node->(23614d0))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(23614f0)]-->>](address of this node->(2361450))---->>>>
[Info->45|Address_of_next_node->(2361470)]-->>](address of this node->(23614f0))---->>>>
[Info->5|Address_of_next_node->(0)]-->>](address of this node->(2361470))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Exiting the process
 Enter choice:2

 Deletion of nodes-->>
 Press 1 for Deleting the first node of the list,
Press 2 for Deleting the last node of the list,
Press 3 for Deleting after a specific node,
Press 4 to exit
 Enter choice:3

 Delete a desired node from the list
 Enter the number to delete: 45

  The linked list:45 is delted
 The element into the list:
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(23614d0)]-->>](address of this node->(2361410))---->>>>
[Info->34|Address_of_next_node->(2361430)]-->>](address of this node->(23614d0))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(2361470)]-->>](address of this node->(2361450))---->>>>
[Info->5|Address_of_next_node->(0)]-->>](address of this node->(2361470))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(23614d0)]-->>](address of this node->(2361410))---->>>>
[Info->34|Address_of_next_node->(2361430)]-->>](address of this node->(23614d0))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(2361470)]-->>](address of this node->(2361450))---->>>>
[Info->5|Address_of_next_node->(0)]-->>](address of this node->(2361470))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Exiting the process
 Enter choice:3

 Traversal in Linked List-->>
Press 1 for forward tarversal of the linked list,
Press2 for backward tarversal of the linked list
 Enter choice:1

 Forward Traversal:
 [[info->1|address_of_next_node->(2361410)]-->>]address of this node->(23613f0)]--->>>
 [[info->2|address_of_next_node->(23614d0)]-->>]address of this node->(2361410)]--->>>
 [[info->34|address_of_next_node->(2361430)]-->>]address of this node->(23614d0)]--->>>
 [[info->3|address_of_next_node->(2361450)]-->>]address of this node->(2361430)]--->>>
 [[info->4|address_of_next_node->(2361470)]-->>]address of this node->(2361450)]--->>>
 [[info->5|address_of_next_node->(0)]-->>]address of this node->(2361470)]
Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Info->1|Address_of_next_node->(2361410)]-->>](address of this node->(23613f0))---->>>>
[Info->2|Address_of_next_node->(23614d0)]-->>](address of this node->(2361410))---->>>>
[Info->34|Address_of_next_node->(2361430)]-->>](address of this node->(23614d0))---->>>>
[Info->3|Address_of_next_node->(2361450)]-->>](address of this node->(2361430))---->>>>
[Info->4|Address_of_next_node->(2361470)]-->>](address of this node->(2361450))---->>>>
[Info->5|Address_of_next_node->(0)]-->>](address of this node->(2361470))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Exiting the process
 Enter choice:3

 Traversal in Linked List-->>
Press 1 for forward tarversal of the linked list,
Press2 for backward tarversal of the linked list
 Enter choice:2

 Backward Traversal-->>
 The element into the list:
[Info->5|Address_of_next_node->(2361450)]-->>](address of this node->(2361470))---->>>>
[Info->4|Address_of_next_node->(2361430)]-->>](address of this node->(2361450))---->>>>
[Info->3|Address_of_next_node->(23614d0)]-->>](address of this node->(2361430))---->>>>
[Info->34|Address_of_next_node->(2361410)]-->>](address of this node->(23614d0))---->>>>
[Info->2|Address_of_next_node->(23613f0)]-->>](address of this node->(2361410))---->>>>
[Info->1|Address_of_next_node->(0)]-->>](address of this node->(23613f0))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Info->5|Address_of_next_node->(2361450)]-->>](address of this node->(2361470))---->>>>
[Info->4|Address_of_next_node->(2361430)]-->>](address of this node->(2361450))---->>>>
[Info->3|Address_of_next_node->(23614d0)]-->>](address of this node->(2361430))---->>>>
[Info->34|Address_of_next_node->(2361410)]-->>](address of this node->(23614d0))---->>>>
[Info->2|Address_of_next_node->(23613f0)]-->>](address of this node->(2361410))---->>>>
[Info->1|Address_of_next_node->(0)]-->>](address of this node->(23613f0))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Exiting the process
 Enter choice:4

 Display the list
 The element into the list:
[Info->5|Address_of_next_node->(2361450)]-->>](address of this node->(2361470))---->>>>
[Info->4|Address_of_next_node->(2361430)]-->>](address of this node->(2361450))---->>>>
[Info->3|Address_of_next_node->(23614d0)]-->>](address of this node->(2361430))---->>>>
[Info->34|Address_of_next_node->(2361410)]-->>](address of this node->(23614d0))---->>>>
[Info->2|Address_of_next_node->(23613f0)]-->>](address of this node->(2361410))---->>>>
[Info->1|Address_of_next_node->(0)]-->>](address of this node->(23613f0))---->>>>

Do you want you repeat the process
Then press Y or y.
Press-->>
 The element into the list:
[Info->5|Address_of_next_node->(2361450)]-->>](address of this node->(2361470))---->>>>
[Info->4|Address_of_next_node->(2361430)]-->>](address of this node->(2361450))---->>>>
[Info->3|Address_of_next_node->(23614d0)]-->>](address of this node->(2361430))---->>>>
[Info->34|Address_of_next_node->(2361410)]-->>](address of this node->(23614d0))---->>>>
[Info->2|Address_of_next_node->(23613f0)]-->>](address of this node->(2361410))---->>>>
[Info->1|Address_of_next_node->(0)]-->>](address of this node->(23613f0))---->>>>

Press 1 for Insertion,
Press 2 for for Deletion,
Press 3 for Traversal,
Press 4 for Display,
Press 5 for Exiting the process
 Enter choice:5
 */
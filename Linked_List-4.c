/*Polynomial Addition in the Linked List*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct polynode
{
  int coeff,expo;
  struct polynode *next;
};typedef struct polynode polynode;// changing name from struct node to node
polynode *start=NULL;
polynode *create_polynode();
polynode* create_polynomial();
polynode *create_polynode_result();
void add_polynomial(polynode*fx,polynode*gx);
void display(polynode *dx);
polynode* create_polynode_result()
{
  polynode *p;
  p=(polynode*)malloc(sizeof(polynode));
  p->next=NULL;
  return p;
}
void display(polynode *dx)//displays the linked list.
{
    polynode*p;
    p=dx;
    printf("\n->The element into the list:\n");
    while(p!=NULL)
    {
        printf("[Coeff->%d|Expo->%d|Address_of_next_node->(%x)]-->>](address of this node->(%x))---->>>>\n",p->coeff,p->expo,p->next,p);
        p=p->next;
    }
}
polynode *create_polynode()
{
  polynode *p;
  p=(polynode*)malloc(sizeof(polynode));
  printf("\nEnter the exponent:");
  scanf("%d",&p->expo);
  printf("\nEnter the coefficient:");
  scanf("%d",&p->coeff);
  p->next=NULL;
  return p;
}
void add_polynomial(polynode*fx,polynode*gx)
{
  polynode *p=NULL,*q=NULL,*r=NULL,*sx=NULL,*a=NULL;
  p=fx;
  q=gx;
  while(p!=NULL && q!=NULL)
  {
    a=create_polynode_result();
    if(p->expo==q->expo)
    {
      a->coeff=p->coeff+q->coeff;
      a->expo=p->expo;
      p=p->next;
      q=q->next;
    }
    else if(p->expo>q->expo)
    {
      a->coeff=p->coeff;
      a->expo=p->expo;
      p=p->next;
    }
    else
    {
      a->coeff=q->coeff;
      a->expo=q->expo;
      q=q->next;
    }
  if(r==NULL)
  {
    sx=a;
    r=a;
  }
  else
  {
    r->next=a;
    r=r->next;
  }
  }
  while(p!=NULL && q==NULL)
  {
    a=create_polynode_result();
    a->coeff=p->coeff;
    a->expo=p->expo;
    p=p->next;
    r->next=a;
    r=r->next;
  }
  while(p==NULL && q!=NULL)
  {
      a=create_polynode_result();
      a->coeff=q->coeff;
      a->expo=q->expo;
      q=q->next;
      r->next=a;
      r=r->next;
  }
  display(sx);
}
void add_polynode()
{
  polynode *p,*q;
  p=create_polynode();
  if(start ==NULL)
  {
    start=p;
  }
  else
  {
    q=start;
    while(q->next != NULL)
    {
      q=q->next;
    }
    q->next=p;
  }
}
polynode* create_polynomial()
{
  int num1;
  polynode*head;
  printf("\nEnter the number of nodes in the  polynomial Linked List:");
  scanf("%d",&num1);
  while(num1>0)
  {
    add_polynode();
    num1--;
  }
  head=start;
  return head; 
}
void main()
{
  polynode*fx=NULL,*gx=NULL;
  fx=create_polynomial();
  start=NULL;
  gx=create_polynomial();
  printf("\n The First Linked List is-->>");
  display(fx);
  printf("\n The Second Linked List is-->>");
  display(gx);
  add_polynomial(fx,gx);
}
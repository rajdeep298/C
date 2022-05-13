/*Open Hashing/Re Hashing*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int n;
int insert;
struct node 
{
    int info;
    struct node *next;
};typedef struct node node;
node *create_node(int k)
{
    node *p;
    p=(node*)malloc(sizeof(node));
    p->info = k;
    p->next=NULL;
    return p;
}
int H(int k)
{
    int val=0;
    val=k%n;
    return val;
}
void insert_node_at_last(node*start,int k)//inserting node at the end of the list
{
    node*p,*q;
    p=create_node(k);// new node created
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
}
void Open_Hashing(node *h[],int k)
{
    int index;
    index=H(k);
    node*ptr;
    ptr=h[index];
    int flag=0,counter=0;
    while(ptr!=NULL && !flag) 
    {
        if(ptr->info==k)
        {
            flag=1;
            counter++;
            printf("\nValue is present at:");
            printf("\nNode.No:%d",counter);
            printf("[Info->%d|Address_of_next_node->(%x)]-->>](address of this node->(%x))---->>>>\n",ptr->info,ptr->next,ptr);
            exit(0);
        }
        else
        {
            ptr=ptr->next;
        }
    }
    if(flag==0)
    {
        if(insert==1)
        {
            insert_node_at_last(h[index],k);
        }
    }
}
void main()
{
    int n,key,insert;
    node *h[1000]={NULL};
    printf("\n Enter the length of Hash Table:\n");
    scanf("%d",&n);
    printf("\nEnter the element you want to insert:\n");
    scanf("%d",&key);
    printf("\nIf you want to insert press 1");
    scanf("%d",&insert);
    Open_Hashing(h,key);
}
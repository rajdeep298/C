/*Open Hashing/Re Hashing*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int n;
int insert;
int counter;
struct node 
{
    int info;
    struct node *next;
};typedef struct node node;
node* insert_node_at_last(node*start,int k);
node* Open_Hashing(node *h[],int k);
node *create_node(int k);
int H(int k);
void display(node *start);
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
node* insert_node_at_last(node*start,int k)//inserting node at the end of the list
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
    return start;
}
void display_counter(node *h[0])
{
    int i=0;
    node*d;
    for(i=0;i<n;i++)
    {
        d=h[i];
        printf("\nH[%d]:",i);
        display(d);
    }
}
void display(node *d)
{
    node*r=NULL;
    r=d;
    while(r!=NULL)
    {
        printf("[Info->%d|Address_of_next_node->(%x)]-->>](address of this node->(%x))---->>>>\n",r->info,r->next,r);
        r=r->next;
    }
}
node* Open_Hashing(node *h[],int k)
{
    int index;
    index=H(k);
    node*ptr;
    ptr=h[index];
    int flag=0;
    while(ptr!=NULL && !flag) 
    {
        if(ptr->info==k)
        {
            flag=1;
            counter++;
            printf("\nValue is present at:");
            printf("\nIndex-%d|H[%d]:",index,index);
            return ptr;
        }
        else
        {
            ptr=ptr->next;
            if(insert==0)
            counter++;
        }
    }
    if(flag==0)
    {
        if(insert==1)
        {
            h[index]=insert_node_at_last(h[index],k);
        }
    }
}
void main()
{
    int key;
    char ch;
    node*ptr;
    node *h[1000]={NULL};
    printf("\nEnter the length of Hash Table:");
    scanf("%d",&n);
    start:
    printf("\nEnter the element you want to insert/search:");
    scanf("%d",&key);
    printf("\nIf you want to insert press 1:");
    scanf("%d",&insert);
    ptr=Open_Hashing(h,key);
    if(insert==0)
    {
        printf("Node.No:%d->",counter);
        counter=0;
        printf("[Info->%d|Address_of_next_node->(%x)]-->>](address of this node->(%x))---->>>>\n",ptr->info,ptr->next,ptr);
    }
    display_counter(h);
    printf("\n If you want to continue the process the press Y or y");
    printf("\n-->>");
    ch=getch();
    if (ch=='Y' || ch=='y')
    {
      goto start;
    }
}
/* ********************************OUTPUT********************************
Enter the length of Hash Table:10

Enter the element you want to insert/search:1

If you want to insert press 1:1

H[0]:
H[1]:[Info->1|Address_of_next_node->(0)]-->>](address of this node->(547113f0))---->>>>

H[2]:
H[3]:
H[4]:
H[5]:
H[6]:
H[7]:
H[8]:
H[9]:
 If you want to continue the process the press Y or y
-->>
Enter the element you want to insert/search:12

If you want to insert press 1:1

H[0]:
H[1]:[Info->1|Address_of_next_node->(0)]-->>](address of this node->(547113f0))---->>>>

H[2]:[Info->12|Address_of_next_node->(0)]-->>](address of this node->(54711410))---->>>>

H[3]:
H[4]:
H[5]:
H[6]:
H[7]:
H[8]:
H[9]:
 If you want to continue the process the press Y or y
-->>
Enter the element you want to insert/search:45

If you want to insert press 1:1

H[0]:
H[1]:[Info->1|Address_of_next_node->(0)]-->>](address of this node->(547113f0))---->>>>

H[2]:[Info->12|Address_of_next_node->(0)]-->>](address of this node->(54711410))---->>>>

H[3]:
H[4]:
H[5]:[Info->45|Address_of_next_node->(0)]-->>](address of this node->(54711430))---->>>>

H[6]:
H[7]:
H[8]:
H[9]:
 If you want to continue the process the press Y or y
-->>
Enter the element you want to insert/search:55

If you want to insert press 1:1

H[0]:
H[1]:[Info->1|Address_of_next_node->(0)]-->>](address of this node->(547113f0))---->>>>

H[2]:[Info->12|Address_of_next_node->(0)]-->>](address of this node->(54711410))---->>>>

H[3]:
H[4]:
H[5]:[Info->45|Address_of_next_node->(54711450)]-->>](address of this node->(54711430))---->>>>
[Info->55|Address_of_next_node->(0)]-->>](address of this node->(54711450))---->>>>

H[6]:
H[7]:
H[8]:
H[9]:
 If you want to continue the process the press Y or y
-->>
Enter the element you want to insert/search:22

If you want to insert press 1:1

H[0]:
H[1]:[Info->1|Address_of_next_node->(0)]-->>](address of this node->(547113f0))---->>>>

H[2]:[Info->12|Address_of_next_node->(54711470)]-->>](address of this node->(54711410))---->>>>
[Info->22|Address_of_next_node->(0)]-->>](address of this node->(54711470))---->>>>

H[3]:
H[4]:
H[5]:[Info->45|Address_of_next_node->(54711450)]-->>](address of this node->(54711430))---->>>>
[Info->55|Address_of_next_node->(0)]-->>](address of this node->(54711450))---->>>>

H[6]:
H[7]:
H[8]:
H[9]:
 If you want to continue the process the press Y or y
-->>
Enter the element you want to insert/search:35

If you want to insert press 1:1

H[0]:
H[1]:[Info->1|Address_of_next_node->(0)]-->>](address of this node->(547113f0))---->>>>

H[2]:[Info->12|Address_of_next_node->(54711470)]-->>](address of this node->(54711410))---->>>>
[Info->22|Address_of_next_node->(0)]-->>](address of this node->(54711470))---->>>>

H[3]:
H[4]:
H[5]:[Info->45|Address_of_next_node->(54711450)]-->>](address of this node->(54711430))---->>>>
[Info->55|Address_of_next_node->(54711490)]-->>](address of this node->(54711450))---->>>>
[Info->35|Address_of_next_node->(0)]-->>](address of this node->(54711490))---->>>>

H[6]:
H[7]:
H[8]:
H[9]:
 If you want to continue the process the press Y or y
-->>
Enter the element you want to insert/search:12

If you want to insert press 1:0

Value is present at:
Index-2|H[2]:Node.No:1->[Info->12|Address_of_next_node->(54711470)]-->>](address of this node->(54711410))---->>>>

H[0]:
H[1]:[Info->1|Address_of_next_node->(0)]-->>](address of this node->(547113f0))---->>>>

H[2]:[Info->12|Address_of_next_node->(54711470)]-->>](address of this node->(54711410))---->>>>
[Info->22|Address_of_next_node->(0)]-->>](address of this node->(54711470))---->>>>

H[3]:
H[4]:
H[5]:[Info->45|Address_of_next_node->(54711450)]-->>](address of this node->(54711430))---->>>>
[Info->55|Address_of_next_node->(54711490)]-->>](address of this node->(54711450))---->>>>
[Info->35|Address_of_next_node->(0)]-->>](address of this node->(54711490))---->>>>

H[6]:
H[7]:
H[8]:
H[9]:
 If you want to continue the process the press Y or y
-->>
Enter the element you want to insert/search:35

If you want to insert press 1:0

Value is present at:
Index-5|H[5]:Node.No:3->[Info->35|Address_of_next_node->(0)]-->>](address of this node->(54711490))---->>>>

H[0]:
H[1]:[Info->1|Address_of_next_node->(0)]-->>](address of this node->(547113f0))---->>>>

H[2]:[Info->12|Address_of_next_node->(54711470)]-->>](address of this node->(54711410))---->>>>
[Info->22|Address_of_next_node->(0)]-->>](address of this node->(54711470))---->>>>

H[3]:
H[4]:
H[5]:[Info->45|Address_of_next_node->(54711450)]-->>](address of this node->(54711430))---->>>>
[Info->55|Address_of_next_node->(54711490)]-->>](address of this node->(54711450))---->>>>
[Info->35|Address_of_next_node->(0)]-->>](address of this node->(54711490))---->>>>

H[6]:
H[7]:
H[8]:
H[9]:
 If you want to continue the process the press Y or y
-->>*/
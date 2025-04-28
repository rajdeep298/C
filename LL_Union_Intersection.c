#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;

node * start1=NULL;
node * start2=NULL;

node* create_node()//creates a node.
{
  node*p;
  p=(node*)malloc(sizeof(node));
//   printf("\n Enter the info:");
//   scanf("%d",&p->next);
  p->next=NULL;
  return (p); 
}

void main(){
    node *p,*q;

    // Creating first linked list
    p=create_node();
    start1=p;
    p->data=1;
    p->next=create_node();
    p=p->next;
    p->data=2;
    p->next=create_node();
    p=p->next;
    p->data=3;
    p->next=create_node();
    p=p->next;
    p->data=4;
    p->next=create_node();
    p=p->next;
    p->data=5;
    p->next=NULL;
    

    // Creating second linked list
    q=create_node();
    start2=q;
    q->data=6;
    q->next=create_node();
    q=q->next;
    q->data=3;
    q->next=create_node();
    q=q->next;
    q->data=8;
    q->next=create_node();
    q=q->next;
    q->data=4;
    q->next=create_node();
    q=q->next;
    q->data=10;
    q->next=NULL;
    
    // Displaying first linked list
    printf("\n First linked list: ");
    p=start1;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }

    printf("\n Second linked list: ");
    q=start2;
    while(q!=NULL){
        printf("%d ",q->data);
        q=q->next;
    }

    ////////////////////////////////////////////////////////////////////////////////////////
    // Finding union of two linked lists
    int LLunion[100],i=0;
    bool foundUnion[100]={false};
    for(i=0;i<100;i++){
        LLunion[i]=-12768;
    }
    p=start1;
    q=start2;

    i=0;
    while(p!=NULL){
        LLunion[i]=p->data;
        foundUnion[p->data]=true;
        p=p->next;
        i++;
    }
    // for(int j=0;j<i;j++){
    //     printf("%d ",LLunion[j]);
    // }

    int temp=i;
    while(q!=NULL){
        printf("@%d@ ",q->data);
        for(int j=0;j<temp;j++){
            if(q->data!=LLunion[j]){
                // printf("!%d! ",LLunion[j]);
                if(foundUnion[q->data]==false) {
                    LLunion[i]=q->data;
                    i++;
            }
                break;
            }
        }
        q=q->next;
    }
    printf("\n Union of two linked lists: ");
    for(int j=0;j<i;j++){
        printf("%d ",LLunion[j]);
    }






    ////////////////////////////////////////////////////////////////////////////////////////
    // Finding intersection of two linked lists
    int LLintersection[100],k=0;
    bool foundIntersection[100]={false};
    for(i=0;i<100;i++){
        LLintersection[i]=-12768;
    }
    p=start1;
    q=start2;
    i=0;
    while(p!=NULL){
        while(q!=NULL){
            if(p->data==q->data){
                if(foundIntersection[p->data]==false) {
                    LLintersection[k]=p->data;
                    foundIntersection[p->data]=true;
                    k++;
                }
            }
            q=q->next;
        }
        p=p->next;
        q=start2;
    }
    printf("\n Intersection of two linked lists: ");
    for(int j=0;j<k;j++){
        printf("%d ",LLintersection[j]);
    }
    printf("\n\n");
}

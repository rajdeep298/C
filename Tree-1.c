/*Implementation of Binary Tree*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct node {
    int info;
    struct node *left;
    struct node *right;
};typedef struct node tn;
tn*root=NULL;
int level=0;
tn *create_node()
{
    tn *ptr=(tn *)malloc(sizeof(tn));
    printf("\nEnter info:");
    scanf("%d",&ptr->info);
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}
void insert_node(tn*root)
{
    if(root==NULL)
    {
        root=create_node();
    }
}
void main()
{
}
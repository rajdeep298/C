/*Implementation of Tree*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
struct node 
{
    int info;
    struct node *left;
    struct node *right;
};typedef struct node tnode;
void insertion_leafnode();
tnode *create_node();
void add_node();
void preorder_traversal(tnode *root);
tnode *root = NULL;
int insert,insert_2;
tnode *create_node()
{
    tnode *p;
    p =(tnode *)malloc(sizeof(tnode));
    printf("\n Enter Info: ");
    scanf("%d",&p->info);
    p->left=NULL;
    p->right=NULL;
    return p;
}
void preorder_traversal(tnode *root)
{
    tnode*ptr = root;
    if(ptr!=NULL)
    {
        printf("%d  ",ptr->info);
        preorder_traversal(ptr->left);
        preorder_traversal(ptr->right);
    }
}
void preorder_insertion(tnode *root)
{
    tnode*ptr = root;
    if(ptr==NULL)
    {
        ptr=create_node();
        preorder_traversal(ptr->left);
        preorder_traversal(ptr->right);
    }
}
void insertion_leafnode()
{
    tnode *ptr=root;
    int ch;
    char c;
    if(root==NULL)
    {
        root=create_node(root);
        preorder_traversal(root);
    }
    preorder_traversal(root);
}
void main()
{
    insertion_leafnode();
    insertion_leafnode();
}
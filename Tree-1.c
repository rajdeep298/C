/*Creating a binary tree(caution:no duplicate node is not allowed)*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct node 
{
    int info;
    struct  node* left, *right;
}; typedef struct node  tnode;
tnode *root=NULL,*main_root=NULL;
int key;
int n,i;
tnode *preorder_search_traversal(tnode *root);
tnode *create_tnode();
void check_and_insert(tnode *ptr);
void create_tree();
tnode *preorder_traversal(tnode *root);
tnode *create_tnode()
{
    tnode *p;
    p=(tnode*)malloc(sizeof(tnode));
    printf("\nEnter info:");
    scanf("%d",&p->info);
    p->left=NULL; 
    p->right=NULL;
    return p;
}
tnode *preorder_search_traversal(tnode *root)
{
    tnode *ptr=root;
    if(ptr!=NULL)
    {
        check_and_insert(ptr);
        preorder_search_traversal(ptr->left);
        preorder_search_traversal(ptr->right);
    }
}
tnode *preorder_traversal(tnode *root)
{
    tnode *ptr=root;
    if(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        preorder_search_traversal(ptr->left);
        preorder_search_traversal(ptr->right);
    }
}
void check_and_insert(tnode *ptr)
{
    if(ptr->info==key)
    {
        char ch;
        printf("\n If you want to insert in left node then press Y or y.");
        printf("\n-->>");
        ch=getch();
        if(ch=='y'|| ch=='Y')
        {
            ptr->left=create_tnode();
        }
        printf("\n If you want to insert in right node then press Y or y.");
        printf("\n-->>");
        ch=getch();
        if(ch=='y'|| ch=='Y')
        {
            ptr->right=create_tnode();
        }
    }
}
void create_tree()
{
    if(root==NULL)
    {
        root=create_tnode();
        main_root=root;
        preorder_traversal(root);
    }
    else
    {
        printf("\nInsert the info of the node after which you want to insert:");
        scanf("%d",&key);
        preorder_search_traversal(root);
        preorder_traversal(root);
    }
}
void main() 
{
    char ch;
    printf("\n*Creating a binary tree(caution:no duplicate node is not allowed)*\n\n");
    start:
    create_tree();
    printf("\nIf you want to continue then press Y or y.");
    printf("\n-->>");
    ch=getch();
    if(ch=='y'|| ch=='Y')
    {
        goto start;
    }
}
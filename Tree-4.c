/*Deletion of node in Binary Tree */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node 
{
    int info;
    struct  node* left, *right;
}; typedef struct node  tnode;
tnode *root=NULL,*main_root=NULL;
int key;
void create_tree();
void check_and_insert(tnode *ptr);
tnode *preorder_traversal(tnode *main_root);
tnode *preorder_search_traversal(tnode *root);
tnode *create_tnode();
void preorder_delete_leaf_node_traversal(tnode *root);
int check_parent_and_delete_child(tnode *ptr);
int check_parent_and_delete_child(tnode *ptr)
{
    if(ptr->left->info==key)
    {
        if(ptr->left->left==NULL && ptr->left->right==NULL)
        {
            ptr->left=NULL;
            return 1;
            exit(0);
        }
        else
        {
            printf("\nWe cannot delete this node as it is not a leave node\n");
            return 0;
            exit(0);
        }
    }
    else if(ptr->right->info==key)
    {
        if(ptr->right->left==NULL && ptr->right->right==NULL)
        {
            ptr->right=NULL;
            return 1;
            exit(0); 
        }
        else
        {
            printf("\nWe cannot delete this node as it is not a leave node\n");
            return 0;
            exit(0);
        }
    }
    else
    {
        return 0;
    }
}
void preorder_delete_leaf_node_traversal(tnode *root)
{
    tnode *ptr=root;
    int p;
    if(ptr!=NULL)
    {
        p=check_parent_and_delete_child(ptr);
        if(p==1)
        {
            goto go;
        }
        preorder_search_traversal(ptr->left);
        preorder_search_traversal(ptr->right);
    }
    if(p==0)
    {
        printf("\n No such node found or if found then the node is not leave node\n");
    }
    go:
}
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
tnode *preorder_traversal(tnode *main_root)
{
    tnode *ptr=main_root;
    if(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        preorder_traversal(ptr->left);
        preorder_traversal(ptr->right);
    }
}
void check_and_insert(tnode *ptr)
{
    if(ptr->info==key)
    {
        char ch;
        if(ptr->left==NULL)
        {
            printf("\n If you want to insert left child then press Y or y.");
            printf("\n-->>");
            ch=getch();
            if(ch=='y'|| ch=='Y')
            {
                ptr->left=create_tnode();
                preorder_traversal(main_root);
            }
        }
        if(ptr->right==NULL)
        {
            printf("\n If you want to insert right child then press Y or y.");
            printf("\n-->>");
            ch=getch();
            if(ch=='y'|| ch=='Y')
            {
                ptr->right=create_tnode();
                preorder_traversal(main_root);
            }
        }
    }
}
void create_tree()
{
    if(root==NULL)
    {
        root=create_tnode();
        main_root=root;
        preorder_traversal(main_root);
    }
    else
    {
        printf("\nInsert the info of the node after which you want to insert:");
        scanf("%d",&key);
        preorder_search_traversal(main_root);
    }
}
void main() 
{
    char ch;
    int i,n;
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
    then:
    printf("\nEnter the node you want to delete: ");
    scanf("%d",&key);
    preorder_delete_leaf_node_traversal(root);
    preorder_traversal(root);
    printf("\nIf you want to continue then press Y or y.");
    printf("\n-->>");
    ch=getch();
    if(ch=='y'|| ch=='Y')
    {
        goto then;
    }
}
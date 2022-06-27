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
{   if(ptr->left != NULL)
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
    }
    if(ptr->right!=NULL)
    {
        if(ptr->right->info==key)
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
    }
    else
    { 
        return 0;
    }
}
void preorder_delete_leaf_node_traversal(tnode *root)
{
    tnode *ptr=root;
    int p=0;
    if(ptr!=NULL)
    {
        p=check_parent_and_delete_child(ptr);
        if(p==1)
        {
            printf("\nNode deleted-%d",key);
        }
        preorder_delete_leaf_node_traversal(ptr->left);
        preorder_delete_leaf_node_traversal(ptr->right);
    }
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
    printf("\n");
    preorder_traversal(root);
    printf("\nIf you want to continue then press Y or y.");
    printf("\n-->>");
    ch=getch();
    if(ch=='y'|| ch=='Y')
    {
        goto then;
    }
}
/* ************************************OUTPUT************************************
*Creating a binary tree(caution:no duplicate node is not allowed)*


Enter info:1
1
If you want to continue then press Y or y.
-->>
Insert the info of the node after which you want to insert:1

 If you want to insert left child then press Y or y.
-->>
Enter info:2
1       2
 If you want to insert right child then press Y or y.
-->>
Enter info:3
1       2       3
If you want to continue then press Y or y.
-->>
Insert the info of the node after which you want to insert:2

 If you want to insert left child then press Y or y.
-->>
Enter info:4
1       2       4       3
 If you want to insert right child then press Y or y.
-->>
If you want to continue then press Y or y.
-->>
Insert the info of the node after which you want to insert:3

 If you want to insert left child then press Y or y.
-->>
 If you want to insert right child then press Y or y.
-->>
Enter info:5
1       2       4       3       5
If you want to continue then press Y or y.
-->>
Enter the node you want to delete: 4

Node deleted-4
1       2       3       5
If you want to continue then press Y or y.
-->>
Enter the node you want to delete: 3

We cannot delete this node as it is not a leave node

1       2       3       5
If you want to continue then press Y or y.
-->>*/
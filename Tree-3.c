/*Binary Search Tree Creation and Traversal*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node 
{
    int info;
    struct  node* left, *right;
}; typedef struct node  tnode;
tnode *root=NULL;
tnode *create_tnode(int key);
tnode *preorder_traversal(tnode *root);
tnode *postorder_traversal(tnode *root);
tnode *inorder_traversal(tnode*root);
tnode *inorder_traversal(tnode*root)
{
    tnode*ptr=root;
    if(ptr!=NULL)
    {
        inorder_traversal(ptr->left);
        printf("%d ",ptr->info);
        inorder_traversal(ptr->right);
    }
}
tnode *postorder_traversal(tnode *root)
{
    tnode*ptr=root;
    if(ptr!=NULL)
    {
        postorder_traversal(ptr->left);
        postorder_traversal(ptr->right);
        printf("%d ",ptr->info);
    }
}
tnode *preorder_traversal(tnode *root)
{
    tnode *ptr=root;
    if(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        preorder_traversal(ptr->left);
        preorder_traversal(ptr->right);
    }
}
tnode *create_tnode(int key)
{
    tnode *p;
    p=(tnode*)malloc(sizeof(tnode));
    p->info=key;
    p->left=NULL; 
    p->right=NULL;
    return p;
}
void binary_search_tree_insertion(int key)
{
    tnode*ptr=root,*ptr1,*new;
    int flag =0;
    while(ptr!=NULL && flag==0)
    {
        if(ptr->info>key) 
        {
            ptr1=ptr;
            ptr=ptr->left;
        }
        if(ptr->info<key)
        {
            ptr1=ptr;
            ptr=ptr->right;
        }
        if(ptr->info==key)
        {
            printf("\nThis element already exists in the tree\nDuplicate Insertion Attempt");
            flag=1;
            exit(0);
        }
    }
    if(root==NULL)
    {
        root=create_tnode(key);
    }
    else if(ptr==NULL)
    {
        new=create_tnode(key);
        if(ptr->info>key)
        {
            ptr1->right=new;
        }
        else
        {
            ptr1->left=new;
        }
    }    
}
void main()
{
    int key;
    char ch;
    start:
    printf("\nEnter the number you want to insert in the Binary Search Tree:");
    scanf("%d",&key);
    binary_search_tree_insertion(key);
    printf("\nPreorder Traversal-->>\n");
    preorder_traversal(root);
    printf("\nInorder Traversal-->>\n");
    inorder_traversal(root);
    printf("\nPostorder Traversal-->>\n");
    postorder_traversal(root);
    printf("\n If you want to continue press y or Y");
    printf("\n-->>");
    ch=getch();
    if(ch=='y' || ch=='Y')
    {
        goto start;
    }
}
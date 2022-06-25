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
        printf("%d\t",ptr->info);
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
        printf("%d\t",ptr->info);
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
        else if(ptr->info<key)
        {
            ptr1=ptr;
            ptr=ptr->right;
        }
        else if(ptr->info==key)
        {
            printf("\nThis element already exists in the tree\nDuplicate Insertion Attempt");
            flag=1;
            exit(0);
        }
    }
    if(ptr==NULL)
    {
        if(root==NULL)
        {
            root=create_tnode(key);
        }
        else
        {
            new=create_tnode(key);
            if(ptr1->info<key)
            {
                ptr1->right=new;
            }
            else
            {
                ptr1->left=new;
            }
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
    printf("\nIf you want to continue press y or Y");
    printf("\n-->>");
    ch=getch();
    if(ch=='y' || ch=='Y')
    {
        goto start;
    }
}
/*
PS D:\Programming\C> gcc Tree-3.c
PS D:\Programming\C> .\a.exe

Enter the number you want to insert in the Binary Search Tree:50

Preorder Traversal-->>
50
Inorder Traversal-->>
50
Postorder Traversal-->>
50
If you want to continue press y or Y
-->>
Enter the number you want to insert in the Binary Search Tree:25

Preorder Traversal-->>
50      25
Inorder Traversal-->>
25      50
Postorder Traversal-->>
25      50
If you want to continue press y or Y
-->>
Enter the number you want to insert in the Binary Search Tree:75

Preorder Traversal-->>
50      25      75
Inorder Traversal-->>
25      50      75
Postorder Traversal-->>
25      75      50
If you want to continue press y or Y
-->>
Enter the number you want to insert in the Binary Search Tree:10

Preorder Traversal-->>
50      25      10      75
Inorder Traversal-->>
10      25      50      75
Postorder Traversal-->>
10      25      75      50
If you want to continue press y or Y
-->>
Enter the number you want to insert in the Binary Search Tree:15

Preorder Traversal-->>
50      25      10      15      75
Inorder Traversal-->>
10      15      25      50      75
Postorder Traversal-->>
15      10      25      75      50
If you want to continue press y or Y
-->>
Enter the number you want to insert in the Binary Search Tree:95

Preorder Traversal-->>
50      25      10      15      75      95
Inorder Traversal-->>
10      15      25      50      75      95
Postorder Traversal-->>
15      10      25      95      75      50
If you want to continue press y or Y
-->>
Enter the number you want to insert in the Binary Search Tree:65

Preorder Traversal-->>
50      25      10      15      75      65      95
Inorder Traversal-->>
10      15      25      50      65      75      95
Postorder Traversal-->>
15      10      25      65      95      75      50
If you want to continue press y or Y
-->>*/
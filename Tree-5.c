#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node 
{
    int info;
    struct  node* left, *right;
}; typedef struct node  tnode;
tnode *root=NULL;
int key;
tnode *create_tnode();
tnode *preorder_traversal(tnode *root);
tnode *postorder_traversal(tnode *root);
void*delete(tnode*root);
void binary_search_tree_insertion();
void binary_search_tree_insertion2(tnode *node);
void binary_search_tree_insertion2(tnode *node)
{
    tnode*ptr=root,*ptr1,*new;
    int flag =0;
    while(ptr!=NULL && flag==0)
    {
        if(ptr->info>node->info) 
        {  
            ptr1=ptr;
            ptr=ptr->left;
        }
        else if(ptr->info<node->info)
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
            if(ptr1->info<node->info)
            {
                ptr1->right=node;
            }
            else
            {
                ptr1->left=node;
            }
        }
    }    
}
void*delete(tnode*root)
{
    tnode *ptr = root,*temp1=NULL,*temp2=NULL,*parent;
    if(key>ptr->info)
    {
        ptr=ptr->right;
    }
    if(key<ptr->info)
    {
        ptr=ptr->left;
    }
    if(ptr->info==key)
    {
        parent=ptr;
        if(ptr->left!=NULL)
        {
            temp1=ptr->left;
        }
        if(ptr->right!=NULL)
        {
            temp2=ptr->right;
        }
        free(parent);
        ptr=NULL;
        if(temp1!=NULL)
        {
            binary_search_tree_insertion2(temp1);
        }
        if(temp2!=NULL)
        {
            binary_search_tree_insertion2(temp2);
        }
    }
}
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
tnode *create_tnode()
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
    then :
    printf("\nEnter the node you want to delete: ");
    scanf("%d",&key);
    delete(root);
    printf("\nIf you want to continue press y or Y");
    printf("\n-->>");
    ch=getch();
    if(ch=='y' || ch=='Y')
    {
        goto then;
    }
    printf("\nIf you want to continue the insertion and then delteion press y or Y");
    printf("\n-->>");
    ch=getch();
    if(ch=='y' || ch=='Y')
    {
        goto start;
    }
}

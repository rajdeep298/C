/*Traversal Non-reccursive Algorithms in Tree*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node 
{
    int info;
    struct  node* left, *right;
}; typedef struct node  tnode;
tnode *root= NULL,*main_root=NULL;
int key;
int top=0;
tnode *stack[10000];
void create_tree();
tnode *pop();
tnode *preorder_search_traversal(tnode *root);
tnode *create_tnode();
void check_and_insert(tnode *ptr);
void preorder_traversal_nonrecursive();
void push(tnode *ptr);
void inorder_treaversal_nonrecursive();
tnode *preorder_traversal(tnode *main_root);
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
void inorder_treaversal_nonrecursive()
{
    push(NULL);
    tnode *ptr=root;
    now:
    while(ptr != NULL)
    {
        push(ptr);
        ptr=ptr->left;
    }
    ptr=pop();
    while(ptr != NULL)
    {
        printf("%d",ptr->info);
        if(ptr->right != NULL)
        {
            ptr=ptr->right;
            goto now;
        }
        ptr=pop();
    }
}
void push(tnode *ptr)
{
    top++;
    stack[top]=ptr;
}
tnode *pop()
{
    tnode *ptr = stack[top];
    top--;
    return(ptr);
}
void preorder_traversal_nonrecursive()
{
    push(NULL);
    tnode*ptr=root;
    while(ptr!=NULL)
    {
        printf("%d",ptr->info);
        if(ptr->right!=NULL)
        {
            push(ptr->right);
        }
        if(ptr->left!=NULL)
        {
            ptr=ptr->left;
        }
        else
        {
            ptr=stack[top];
            top=top-1;
        }
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
        to:
    printf("\nPress 1 to add a child,\nPress 2 to Traversal.");
    printf("\n-->>");
    scanf("%d",&n);
    switch(n)
    {
        case 1:next:
               create_tree();
               printf("\nIf you want to continue then press Y or y.");
               printf("\n-->>");
               ch=getch();
               if(ch=='y'|| ch=='Y')
               {
                goto next;
               }
               break;
        case 2:printf("Traversal-->>");
               then:
               printf("\nPress 1 for Preorder_Traversal,\nPress 2 for Inorder_Traversal.");
               printf("\n-->>");
               scanf("%d",&i);
               switch(i)
               {
                case 1:preorder_traversal_nonrecursive(main_root);
                       break;
                case 2:inorder_treaversal_nonrecursive(main_root);
                       break;
               }
               printf("\nIf you want to continue then press Y or y.");
               printf("\n-->>");
               ch=getch();
               if(ch=='y'|| ch=='Y')
               {
                goto then;
               }
               break;
        default: printf("\n Enter the correct choice");       
    }
    printf("\nIf you want to continue Insertion or Traversal then press Y or y.");
    printf("\n-->>");
    ch=getch();
    if(ch=='y'|| ch=='Y')
    {
        goto to;
    }
}
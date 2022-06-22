/*Creating a binary tree and Traversal(recursive)[caution:no duplicate node is not allowed]*/
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
tnode *preorder_search_traversal(tnode *root);
tnode *create_tnode();
void check_and_insert(tnode *ptr);
void create_tree();
tnode *preorder_traversal(tnode *root);
tnode *postorder_traversal(tnode *root);
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
               printf("\nPress 1 for Preorder_Traversal,\nPress 2 for Inorder_Traversal,\nPress 3 for Postorder_Traversal");
               printf("\n-->>");
               scanf("%d",&i);
               switch(i)
               {
                case 1:preorder_traversal(main_root);
                       break;
                case 2:inorder_traversal(main_root);
                       break;
                case 3:postorder_traversal(main_root);
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
/* ******************************OUTPUT******************************
PS D:\Programming\C> gcc Tree-1.c
PS D:\Programming\C> .\a.exe

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
Enter info:
3
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
Press 1 to add a child,
Press 2 to Traversal.
-->>1

Insert the info of the node after which you want to insert:2

 If you want to insert right child then press Y or y.
-->>
Enter info:5
1       2       4       5       3
If you want to continue then press Y or y.
-->>
Insert the info of the node after which you want to insert:3

 If you want to insert left child then press Y or y.
-->>
 If you want to insert right child then press Y or y.
-->>
Enter info:6
1       2       4       5       3       6
If you want to continue then press Y or y.
-->>
If you want to continue Insertion or Traversal then press Y or y.
-->>
Press 1 to add a child,
Press 2 to Traversal.
-->>2
Traversal-->>
Press 1 for Preorder_Traversal,
Press 2 for Inorder_Traversal,
Press 3 for Postorder_Traversal
-->>1
1       2       4       5       3       6
If you want to continue then press Y or y.
-->>
Press 1 for Preorder_Traversal,
Press 2 for Inorder_Traversal,
Press 3 for Postorder_Traversal
-->>2
4 2 5 1 3 6 
If you want to continue then press Y or y.
-->>
Press 1 for Preorder_Traversal,
Press 2 for Inorder_Traversal,
Press 3 for Postorder_Traversal
-->>3
4 5 2 6 3 1 
If you want to continue then press Y or y.
-->>
If you want to continue Insertion or Traversal then press Y or y.
-->>*/
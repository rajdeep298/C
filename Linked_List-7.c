/*Basic Operations on Linked List(2nd approach)*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node {
    int info;
    struct node *next;
};typedef struct node node;
node *list1 =NULL;
node *insert_node(node *head , int data){
    node *temp;
    node *newp;
    newp = (node *)malloc(sizeof(node));
    newp->info = data;
    newp->next = NULL;
    if (head == NULL) {
        head = newp;
    } else {
        temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newp;
    }
    return head;
}
node *insert_beginning( node *head, int data) {
    node *newp = (node *)malloc(sizeof(node));
    newp->info = data;
    newp->next = NULL;
    if(head == NULL) {
        head = newp;
    } else {
        newp->next = head;
        head = newp;
    }
    return head;
}
node *insert_after_node(node *head, int key, int data) {
    node *temp;
    node *prev;
    node *newp = (node *)malloc(sizeof(node));
    newp->info = data;
    newp->next = NULL;
    if(head == NULL) {
        head = newp;
    } else {
        temp = head;
        while(temp != NULL && temp->info != key) {
            prev = temp;
            temp = temp->next;
        }
        if(temp != NULL) {
            newp->next = temp->next;
            temp->next = newp;
        } else {
            prev->next = newp;
        }
    }
    return head;
}
node *insert_before_node(node *head, int key, int data) {
    node *temp;
    node *prev;
    node *newp = (node *)malloc(sizeof(node));
    newp->info = data;
    newp->next =NULL;
    if(head == NULL) {
        head = newp;
    } else {
        temp = head;
        while(temp != NULL && temp->info != key) {
            prev = temp;
            temp = temp->next;
        }
        if(temp != NULL) {
            newp->next = temp;
            prev->next = newp;
        } else {
            prev->next = newp;
        }
    }
    return head;
}
node *delete_first_node(node *head) {
    node *temp;
    if(head == NULL) {
        printf("\nEmpty List.\n");
    } else {
        temp = head;
        head = temp->next;
        free(temp);
    }
    return head;
}
node *delete_last_node(node *head) {
    node *temp;
    node *prev;
    if(head == NULL) {
        printf("\nLinked List Underflow.\n");
    } else {
        temp = head;
        while(temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        prev->next= NULL;
        free(temp);
    }
    return head;
}
node *delete_node(node *head, int key) {
    node *temp;
    node *prev;
    if(head == NULL) {
        printf("\nEmpty List.\n");
    } else {
        temp = head;
        while(temp != NULL && temp->info != key) {
            prev = temp;
            temp = temp->next;
        }
        if(temp != NULL) {
            prev->next=temp->next;
            free(temp);
        } else {
            printf("\nNo such node found.\n");
        }
    }
    return head;
}
void forward_trvs(node *head) {
    node *temp;
    if (head == NULL) {
        printf("\nEmpty List.\n");
    } else {
        temp = head;
        while(temp != NULL) {
            printf("%d  " ,temp->info);
            temp = temp->next;
        }
    }
}
node *backward_trvs(node *head) {
    node *nxt;
    node *prev = head;
    node *p = prev->next;
    prev->next = NULL;
    while(p != NULL) {
        nxt = p->next;
        p->next = prev;
        prev = p;
        p = nxt;
    }
    head = prev;
    return head;
}
void display(node *head) {
    node *temp = head;
    if(head == NULL) {
        printf("\nEmpty List.\n");
    } else {
         while(temp != NULL) {
            printf("%d  " ,temp->info);
            temp = temp->next;
        }
    }
}
node *concat_list(node *ptr1, node *ptr2, node *r) {
    node *p = ptr1;
    node *q = ptr2;
    node *result = p;
    while(p->next != NULL) {
        p = p->next;
    }
    p->next = q;
    r = result;
    return r;
}
node *create(node *head) {
    int n, i, data;
    printf("\nHow many nodes you wanna enter: ");
    scanf("%d" ,&n);
    for(i = 1; i <= n; i++) {
        printf("\nenter the data: ");
        scanf("%d" ,&data);
        head = insert_node(head , data);
    }
    return head;
}
void main () {
    
    int num, key, del, option, option2, data;
    char ch;
    list1 = create(list1);
    start:
    display(list1);
    printf("\nPress 1 for insertion\nPress 2 for deletion\nPress 3 for traversal\nPress 4 for display\nPress 5 for exiting the process\n");
    scanf("%d" ,&option);
    switch(option) {
        case 1:
        printf("\nPress 1 to insert at beginning\nPress 2 to insert at end\nPress 3 to insert after a node\nPrerss 4 to insert before a node\nPress 5 to exit\nEnter your choice: ");
        scanf("%d" ,&option2);
        switch(option2) {
            case 1:
            printf("\nEnter the data of new node: ");
            scanf("%d" ,&data);
            list1=insert_beginning(list1, data);
            display(list1);
            break;
            case 2:
            printf("\nEnter the data of new node: ");
            scanf("%d" ,&data);
            list1=insert_node(list1 , data);
            display(list1);
            break;
            case 3:
            printf("\nEnter the data of new node: ");
            scanf("%d" ,&data);
            printf("\nEnter the node info after which you want to insert: ");
            scanf("%d" ,&key);
            list1=insert_after_node(list1, key, data);
            display(list1);
            break;
            case 4:
            printf("\nEnter the data of new node: ");
            scanf("%d" ,&data);
            printf("\nEnter the node info before which you want to insert: ");
            scanf("%d" ,&key);
            list1=insert_before_node(list1 , key, data);
            display(list1);
            break;
            case 5:
            break;
            default :
            printf("\nEnter a correct choice.\n");
        }
        break;
        case 2:
        printf("\nPress 1 to delete first node\nPress 2 to delete last node\nPress 3 to delete a particular node\nPress 4 to exit\nEnter your choice: ");
        scanf("%d" ,&option2);
        switch(option2) {
            case 1:
            list1=delete_first_node(list1);
            display(list1);
            break;
            case 2:
            list1=delete_last_node(list1);
            display(list1);
            break;
            case 3:
            printf("\nEnter the info of the node you want to delete: ");
            scanf("%d" ,&del);
            list1=delete_node(list1, del);
            display(list1);
            break;
            case 4:
            break;
            default: 
            printf("\nEnter a correct choice.\n");
        }
        break;
        case 3:
        printf("\nPress 1 for forward traversal\nPress 2 for backward traversal\nPress 3 to exit\nEnter your choice: ");
        scanf("%d" ,&option2);
        switch(option2) {
            case 1:
            forward_trvs(list1);
            break;
            case 2:
            list1=backward_trvs(list1);
            display(list1);
            break;
            case 3:
            break;
            default:
            printf("\nEnter correct choice.\n");
        }
        break;
        case 4:
        display(list1);
        break;
        case 5:
        break;
        default:
        printf("\nEnter a valid choice./n");
        break;
    }
    printf("\npress y or Y to repeat the process");
    printf("\nPress-->>");
    ch=getch();
    if(ch=='y' || ch=='Y')
    {
       goto start;
    }
    printf("\nEnd of the procedure.\n");
}
/*

How many nodes you wanna enter: 5

enter the data: 1

enter the data: 2

enter the data: 3

enter the data: 4

enter the data: 5
1  2  3  4  5
Press 1 for insertion
Press 2 for deletion
Press 3 for traversal
Press 4 for display
Press 5 for exiting the process
1

Press 1 to insert at beginning
Press 2 to insert at end
Press 3 to insert after a node
Prerss 4 to insert before a node
Press 5 to exit
Enter your choice: 1

Enter the data of new node: 12
12  1  2  3  4  5
press y or Y to repeat the process
Press-->>12  1  2  3  4  5
Press 1 for insertion
Press 2 for deletion
Press 3 for traversal
Press 4 for display
Press 5 for exiting the process
1

Press 1 to insert at beginning
Press 2 to insert at end
Press 3 to insert after a node
Prerss 4 to insert before a node
Press 5 to exit
Enter your choice: 2

Enter the data of new node: 23
12  1  2  3  4  5  23
press y or Y to repeat the process
Press-->>12  1  2  3  4  5  23
Press 1 for insertion
Press 2 for deletion
Press 3 for traversal
Press 4 for display
Press 5 for exiting the process
1

Press 1 to insert at beginning
Press 2 to insert at end
Press 3 to insert after a node
Prerss 4 to insert before a node
Press 5 to exit
Enter your choice: 3

Enter the data of new node: 45

Enter the node info after which you want to insert: 1
12  1  45  2  3  4  5  23
press y or Y to repeat the process
Press-->>12  1  45  2  3  4  5  23
Press 1 for insertion
Press 2 for deletion
Press 3 for traversal
Press 4 for display
Press 5 for exiting the process
1

Press 1 to insert at beginning
Press 2 to insert at end
Press 3 to insert after a node
Prerss 4 to insert before a node
Press 5 to exit
Enter your choice: 4

Enter the data of new node: 56

Enter the node info before which you want to insert: 3
12  1  45  2  56  3  4  5  23
press y or Y to repeat the process
Press-->>12  1  45  2  56  3  4  5  23
Press 1 for insertion
Press 2 for deletion
Press 3 for traversal
Press 4 for display
Press 5 for exiting the process
2

Press 1 to delete first node
Press 2 to delete last node
Press 3 to delete a particular node
Press 4 to exit
Enter your choice: 1
1  45  2  56  3  4  5  23
press y or Y to repeat the process
Press-->>1  45  2  56  3  4  5  23
Press 1 for insertion
Press 2 for deletion
Press 3 for traversal
Press 4 for display
Press 5 for exiting the process
2

Press 1 to delete first node
Press 2 to delete last node
Press 3 to delete a particular node
Press 4 to exit
Enter your choice: 2
1  45  2  56  3  4  5
press y or Y to repeat the process
Press-->>1  45  2  56  3  4  5
Press 1 for insertion
Press 2 for deletion
Press 3 for traversal
Press 4 for display
Press 5 for exiting the process
2

Press 1 to delete first node
Press 2 to delete last node
Press 3 to delete a particular node
Press 4 to exit
Enter your choice: 3

Enter the info of the node you want to delete: 56
1  45  2  3  4  5
press y or Y to repeat the process
Press-->>1  45  2  3  4  5
Press 1 for insertion
Press 2 for deletion
Press 3 for traversal
Press 4 for display
Press 5 for exiting the process
3

Press 1 for forward traversal
Press 2 for backward traversal
Press 3 to exit
Enter your choice: 1
1  45  2  3  4  5
press y or Y to repeat the process
Press-->>1  45  2  3  4  5
Press 1 for insertion
Press 2 for deletion
Press 3 for traversal
Press 4 for display
Press 5 for exiting the process
3

Press 1 for forward traversal
Press 2 for backward traversal
Press 3 to exit
Enter your choice: 2
5  4  3  2  45  1
press y or Y to repeat the process
Press-->>5  4  3  2  45  1
Press 1 for insertion
Press 2 for deletion
Press 3 for traversal
Press 4 for display
Press 5 for exiting the process
4
5  4  3  2  45  1 */
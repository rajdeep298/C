#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define s 10
struct hashNode {
    int info;
    struct hashNode *next;
};
typedef struct hashNode hNode;
hNode *hTable[s];
void init() {
    int i;
    for(i = 0; i < s; i++) {
        hTable[i] = NULL;
    }
}
int hFunc(int value) {
    return (value%s);
}
hNode *insert(int value) {
    hNode *newP = (hNode *)malloc(sizeof(hNode));
    newP->info = value;
    newP->next = NULL;
    printf("\nValue inserted.");
    return newP;

}
void search(int value) {
    int index = hFunc(value);
    bool flag = false;
    if (hTable[index] == NULL) {
        hTable[index] = insert(value);
    } else {
        hNode *ptr = hTable[index];
        hNode *prev;
        while(ptr != NULL && flag == false) {
            if(ptr->info == value) {
                printf("\nThe index of the searched element is : %d\n" ,index);
                flag = true;
                return;
            } else {
                prev = ptr;
                ptr = ptr->next;
            }
        }
        if(flag == false) {
            prev->next = insert(value);
        }
    }
    
}
void display() {
    int i;
    printf("\nThe entire HASH TABLE representation:\n");
    for(i = 0; i < s; i++) {
        hNode *temp = hTable[i];
        printf("\nhTable[%d]: " ,i);
        while(temp != NULL) {
            printf("%d->" ,temp->info);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}
void main() {
    int option, value;
    char ch;
    do
    {
        printf("\nPress 1 to search.\nPress 2 to display.\nEnter your choice: ");
        scanf("%d" ,&option);
        switch(option) {
            case 1: 
            printf("\nEnter the value you wanna search: ");
            scanf("%d" ,&value);
            search(value);
            break;
            case 2:
            display();
            break;
            default: 
            printf("\nEnte a valid choice.");
            break;
        }
        printf("\nPress y or Y to continue: ");
        fflush(stdin);
        scanf("%c" ,&ch);

    } while(ch == 'y' || ch == 'Y');
    printf("\nProcedure ended because of invalid input.");
    
}
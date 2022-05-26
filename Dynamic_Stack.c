#include<stdio.h>
#include<stdlib.h>

int *item;
int top = -1;
void push(int value);
void pop();
void display();
void push(int value) {
    if (item == NULL) {
        item = (int *)malloc(sizeof(int));
        item[++top] = value; 
    } else {
        item = realloc(item,(top+1+sizeof(int)));
        item[++top] = value;
    }
    display();
}

void pop() {
    if(item == NULL) {
        printf("\nStack underflow");
    } else {
        printf("\nItem popped: %d" ,item[top--]);
    }
    printf("\n");
    display();
}

void display() {
    int i =0;
    int value;
    for ( i = 0; i <= top; i++)
    {
        printf("%d  ", item[i]);
    }
    
}
int main() {
    int option, value;
    char ch;
    do
    {
        printf("\nEnter 1 to insert a value.\nEnter 2 to delete a value.\nEnter 3 to display.");
        printf("\nEnter your choice: ");
        scanf("%d" ,&option); 
        switch (option)
        {
            case 1:
            printf("\nEnter the value you wanna push: ");
            scanf("%d" ,&value);
            push(value);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            default:
            printf("\nEnter a valid choice");
            break;
        }

        printf("\nPress y or Y to continue: ");
        fflush(stdin);
        scanf("%c" ,&ch);

    } while(ch == 'y' || ch =='Y');
    free(item);
    printf("\nProcedure ended as you wished to do it.");
    return 0;
}
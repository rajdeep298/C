/* Push and pop operations of stack. */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void display_stack();
void push_stack(int n);
void pop_stack();
int top=-1;
int a[100];
void display_stack()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("\n Element-%d:%d",i,a[i]);
    }
    printf("\n This was output of your chosen opeartion :) .");
}
void push_stack(int n)
{
   int value;
   if(top>=n-1)
   {
       printf("\n Stack overflowed");
   }
   else
   {
       top=top+1;
       printf("\n Enter the value to push: ");
       scanf("%d",&value);
       a[top]=value;
   }
   display_stack();
}
void pop_stack()
{
    int value;
    if(top<0)
    {
        printf("\n Stack underflow");
    }
    else
    {
      value=a[top];
      top=top-1;
      printf("\nValue extracted from stack: %d",value);
    }
    display_stack();
}
void main()
{
    int choice;
    int n,a[100];
    char ch;
    system("cls");
    printf("\n Enter the limit of the stack:");
    scanf("%d",&n);
    start:
    printf("\nPress 1 to PUSH\nPress 2 for POP\nPress 3 for Displaying the Stack\nPress 4 for exit the process.");
    printf("\n-->>");
    scanf("%d",&choice);
switch(choice)
{
    case 1: push_stack(n);
            break;
    case 2: pop_stack();
            break;
    case 3:display_stack();
            break;
    case 4:exit(0);
	       break;
    default: printf("\n Enter the correct choice");                             
}
    printf("\n If you want to continue, press Y or y ");
    printf("\n-->>");
    ch=getch();
    if(ch=='y'|| ch=='Y')
    {
        goto start;
    }
    printf("\n ********************End of the process********************");
    printf("\n:)");
}
/*
*******************************OUTPUT*******************************


 Enter the limit of the stack:5

Press 1 to PUSH
Press 2 for POP
Press 3 for Displaying the Stack
Press 4 for exit the process.
-->>1

 Enter the value to push: 1

 After insertion-0:1
 This was output of your chosen opeartion :) .
 If you want to continue, press Y or y 
-->>
Press 1 to PUSH
Press 2 for POP
Press 3 for Displaying the Stack
Press 4 for exit the process.
-->>1

 Enter the value to push: 2

 After insertion-1:2
 After insertion-0:1
 This was output of your chosen opeartion :) .
 If you want to continue, press Y or y 
-->>
Press 1 to PUSH
Press 2 for POP
Press 3 for Displaying the Stack
Press 4 for exit the process.
-->>1

 Enter the value to push: 3

 After insertion-2:3
 After insertion-1:2
 After insertion-0:1
 This was output of your chosen opeartion :) .
 If you want to continue, press Y or y
-->>
Press 1 to PUSH
Press 2 for POP
Press 3 for Displaying the Stack
Press 4 for exit the process.
-->>1

 Enter the value to push: 4

 After insertion-3:4
 After insertion-2:3
 After insertion-1:2
 After insertion-0:1
 This was output of your chosen opeartion :) .
 If you want to continue, press Y or y 
-->>
Press 1 to PUSH
Press 2 for POP
Press 3 for Displaying the Stack
Press 4 for exit the process.
-->>1

 Enter the value to push: 5

 After insertion-4:5
 After insertion-3:4
 After insertion-2:3
 After insertion-1:2
 After insertion-0:1
 This was output of your chosen opeartion :) .
 If you want to continue, press Y or y
-->>
Press 1 to PUSH
Press 2 for POP
Press 3 for Displaying the Stack
Press 4 for exit the process.
-->>1

 Stack overflowed
 After insertion-4:5
 After insertion-3:4
 After insertion-2:3
 After insertion-1:2
 After insertion-0:1
 This was output of your chosen opeartion :) .
 If you want to continue, press Y or y
-->>
Press 1 to PUSH
Press 2 for POP
Press 3 for Displaying the Stack
Press 4 for exit the process.
-->>2

Value extracted from stack: 5
 After insertion-3:4
 After insertion-2:3
 After insertion-1:2
 After insertion-0:1
 This was output of your chosen opeartion :) .
 If you want to continue, press Y or y
-->>
Press 1 to PUSH
Press 2 for POP
Press 3 for Displaying the Stack
Press 4 for exit the process.
-->>2

Value extracted from stack: 4
 After insertion-2:3
 After insertion-1:2
 After insertion-0:1
 This was output of your chosen opeartion :) .
 If you want to continue, press Y or y 
-->>
Press 1 to PUSH
Press 2 for POP
Press 3 for Displaying the Stack
Press 4 for exit the process.
-->>2

Value extracted from stack: 3
 After insertion-1:2
 After insertion-0:1
 This was output of your chosen opeartion :) .
 If you want to continue, press Y or y
-->>
Press 1 to PUSH
Press 2 for POP
Press 3 for Displaying the Stack
Press 4 for exit the process.
-->>2

Value extracted from stack: 2
 After insertion-0:1
 This was output of your chosen opeartion :) .
 If you want to continue, press Y or y 
-->>
Press 1 to PUSH
Press 2 for POP
Press 3 for Displaying the Stack
Press 4 for exit the process.
-->>2

Value extracted from stack: 1
 This was output of your chosen opeartion :) .
 If you want to continue, press Y or y
-->>
Press 1 to PUSH
Press 2 for POP
Press 3 for Displaying the Stack
Press 4 for exit the process.
-->>2

 Stack underflow
 This was output of your chosen opeartion :) .
 If you want to continue, press Y or y
-->>
 ********************End of the process********************
:)
*/ 

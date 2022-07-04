/*Basic Operations in Circular Queue*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void circular_queue_insertion();
void circular_queue_deletion();
void circular_queue_display_deletion(int *a,int max);
void circular_queue_display_insertion(int *a);
int rear=-1;
int front=-1;
int counter=0;
int plug=0;
void circular_queue_insertion(int *a, int max)
{
   int value;
   if(counter>=max)
   {
      printf("\n Queue Overlapped :(");
   }
   else
   {
       printf("\nEnter the Number to insert in the Queue:");
       scanf("%d",&value);
       rear=(rear+1)%max;
       a[rear]=value;
       counter++;
   }
   plug=0;
   circular_queue_display_insertion(a);
}
void circular_queue_deletion(int *a, int max)
{
    int value;
    if(counter ==0)
    {
        printf("\nQueue Underlfow :(");
    }
    else
    {
        front=(front+1)%max;
        value=a[front];
        counter--;
        printf("\nThe value extracted from the Queue:%d",value);
    }
    if(counter==0)
    {
        front=-1;
        rear=-1;
    }
    plug=1;
    circular_queue_display_deletion(a,max);
}
void circular_queue_display_insertion(int *a)
{
    int i;
    for(i=((front>=0) ? front :0);i<=rear;i++)
    {
        printf("\nElement-%d:%d",i,a[i]);
    }
    printf("\nThis was output of your chosen opeartion :) .");
}
void circular_queue_display_deletion(int *a,int max)
{
    int i;
    for(i=((front>=0) ? front :0)+1;i<=rear;i++)
    {
        printf("\nElement-%d:%d",i,a[i]);
    }
    printf("\nThis was output of your chosen opeartion :) .");
}
void main()
{
    int a[100],choice,max;
    char ch;
    printf("\n Enter the limit of the queue: ");
    scanf("%d",&max);
    start:
    printf("\nPress\n1.For Insertion,\n2 for Deletion,\n3 for Display,\n4 for Exiting the Programme");
    printf("\nEnter the choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("\nInsertion-->>");
               circular_queue_insertion(a,max);
               break;
        case 2:printf("\nDeletion-->>");
                circular_queue_deletion(a,max);
                break;
        case 3:printf("\nDisplay-->>");
                if(plug==0)
                {
                    circular_queue_display_insertion(a);
                }
                else if(plug==1)
                {
                    circular_queue_display_deletion(a,max);
                }
                break;
        case 4:printf("\nExiting the Programme .......");
               exit(0);
               break;
        default:printf("\nPlease Select Correct Choice :(");
    }
        printf("\nIf you want to continue, press Y or y.");
    printf("\n-->>");
    ch=getch();
    if(ch=='y'|| ch=='Y')
    {
        goto start;
    }
    printf("\n********************End of the process********************");
    printf("\n:)");
}
/*
Enter the limit of the queue: 5

Press
1.For Insertion,
2 for Deletion,
3 for Display,
4 for Exiting the Programme
Enter the choice:1

Insertion-->>
Enter the Number to insert in the Queue:1

Element-0:1
This was output of your chosen opeartion :) .
If you want to continue, press Y or y.
-->>
Press
1.For Insertion,
2 for Deletion,
3 for Display,
4 for Exiting the Programme
Enter the choice:1

Insertion-->>
Enter the Number to insert in the Queue:2

Element-0:1
Element-1:2
This was output of your chosen opeartion :) .
If you want to continue, press Y or y.
-->>
Press
1.For Insertion,
2 for Deletion,
3 for Display,
4 for Exiting the Programme
Enter the choice:1

Insertion-->>
Enter the Number to insert in the Queue:3

Element-0:1
Element-1:2
Element-2:3
This was output of your chosen opeartion :) .
If you want to continue, press Y or y.
-->>
Press
1.For Insertion,
2 for Deletion,
3 for Display,
4 for Exiting the Programme
Enter the choice:2

Deletion-->>
The value extracted from the Queue:1
Element-1:2
Element-2:3
This was output of your chosen opeartion :) .
If you want to continue, press Y or y.
-->>
Press
1.For Insertion,
2 for Deletion,
3 for Display,
4 for Exiting the Programme
Enter the choice:3

Display-->>
Element-1:2
Element-2:3
This was output of your chosen opeartion :) .
If you want to continue, press Y or y.
-->>
Press
1.For Insertion,
2 for Deletion,
3 for Display,
4 for Exiting the Programme
Enter the choice:4

Exiting the Programme .......*/
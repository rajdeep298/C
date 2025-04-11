/*Basic Operations of Queue*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void queue_insertion();
void queue_deletion();
void queue_display();
int rear=-1;
int front=-1;
void queue_insertion(int *a, int max)
{
   int value;
   if(rear>=max-1)
   {
      printf("\n Queue Overflow :(");
   }
   else
   {
       printf("\nEnter the Number to insert in the Queue:");
       scanf("%d",&value);
       rear++;
       a[rear]=value;
   }
   queue_display(a);
}
void queue_deletion(int *a, int max)
{
    int value;
    if(rear<0)
    {
        printf("\nQueue Underlfow :(");
    }
    else
    {
        front++;
        value=a[front];
        printf("\nThe value extracted from the Queue:%d",value);
    }
    if(front == rear)
    {
        front=-1;
        rear=-1;
    }
    queue_display(a);
}
void queue_display(int *a)
{
    int i;
    for(i=((front>=0) ? front :0);i<=rear;i++)
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
               queue_insertion(a,max);
               break;
        case 2:printf("\nDeletion-->>");
                queue_deletion(a,max);
                break;
        case 3:printf("\nDisplay-->>");
                queue_display(a);
                break;
        case 4:printf("\nExiting the Programme .......");
               exit(0);
               break;
        default:printf("\nPlease Select Correct Choice :(");
    }
        printf("\n If you want to continue, press Y or y ");
    printf("\n-->>");
    ch=getch();
    if(ch=='y'|| ch=='Y')
    {
        goto start;
    }
    printf("\n********************End of the process********************");
    printf("\n:)");
}
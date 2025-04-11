/*Basic Operations in Circular Queue*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void circular_queue_insertion();
void circular_queue_deletion();
void circular_queue_display();
int rear=-1;
int front=-1;
int counter=0;
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
   circular_queue_display(a);
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
    circular_queue_display(a);
}
void circular_queue_display(int *a)
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
               circular_queue_insertion(a,max);
               break;
        case 2:printf("\nDeletion-->>");
                circular_queue_deletion(a,max);
                break;
        case 3:printf("\nDisplay-->>");
                circular_queue_display(a);
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
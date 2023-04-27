#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct reference {
    int source;
    char dest; 
    char status;
};
typedef struct graph{
    int a[100][100];
    int n;
};
int stack[100],top=-1;
void push(int x){
    top++;
    stack[top]=x;
}
int pop(){
    int x=stack[top];
    top--;
    return x;
}
void Depth_First_Search(){
    int i,j;
    struct graph g;
    struct reference w[100];
    printf("\nEnter the number of nodes:");
    scanf("%d",&g.n);
    for ( i = 0;i<g.n;i++){
    printf("\nIf %d is connected to:",i+1);
        for( j = 0;j<g.n;j++){
            if(i==j){
                g.a[i][j] =0;
                continue;
            }
            else
            {
                printf("\n%d press 1:",j+1);
                scanf("%d",&g.a[i][j]);
            }
        }
        for(i=0;i<g.n;i++){
            w[i].source=0;
            w[i].dest='?';
            w[i].status='?';
        }
        w[0].source='*';
        w[0].status='!';
        push(0);
        while(top>-1){
            int s=pop();
        }
    }
}
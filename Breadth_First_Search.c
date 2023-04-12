#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct graph_node{
    int index_number;
    bool visited;
};
typedef struct graph_node node;
void main() {
    int n,i,j,front=-1,rear=-1,data,index=0;
    printf("\nEnter the number of nodes:");
    scanf("%d", &n);
    int a[n][n];
    node queue[n];
    for ( i = 0;i<n;i++){
        printf("\nIf %d is connected to:",i+1);
        for( j = 0;j<n;j++){
            if(i==j){
                a[i][j] =0;
                continue;
            }
            else
            {
                printf("\n%d press 1:",j+1);
                scanf("%d",&a[i][j]);
            }
        }
    }
    printf("\nThe adjacency matrix is:\n");
    for(i=0;i<n;i++){
        queue[i].visited=false;
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nConnected Vertices:");
    while(front<n){
        front++;
        queue[front].index_number=0;
        rear++;
        for(i=0;i<n;i++){
            if(a[rear][i]==1 && queue[i].visited==false && rear!=i){
                front++;
                queue[front].index_number=i;
                queue[front].visited=true;
                printf("%d\t%d,",rear,i);
            }
        }
        queue[rear].visited=true;
        printf("\n");
    }
}
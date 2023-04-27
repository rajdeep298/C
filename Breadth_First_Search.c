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
    int a[100][100];
    node queue[100];
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
}
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct edge_list{
    int source;
    int dest;
}e[100];
int edge_list_len=0;
typedef struct edge_list edge_list;
void main(){
    int i,j;
    printf("\nEnter the number of the edges in the graph: ");
    scanf("%d",&edge_list_len);
    for(i=0;i<edge_list_len;i++){
        printf("\nEnter the source of the edge %d: ",i+1);
        scanf("%d",&e[i].source);
        printf("\nEnter the destination of the edge %d: ",i+1);
        scanf("%d",&e[i].dest);
    }
    printf("\nAdjacency List=>");
    for(i=0;i<edge_list_len;i++){
        printf("\n%d->",e[i].source);
        for(j=0;j<edge_list_len;j++){
            if(e[j].source==e[i].source){
                printf("%d,",e[j].dest);
            }
        }
    }
    printf("\n Parallel Edges=>");
    for(i=1;i<edge_list_len;i++){
        for(j=0;j<i;j++){
            if(e[i].source==e[j].dest && e[i].dest==e[j].source ){
                printf("%d->%d,",e[i].source,e[i].dest);
            }
        }
    }
}
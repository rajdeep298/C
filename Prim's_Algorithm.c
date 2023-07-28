/*C program to implement Prim's Algorithm*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct graph
{
    int w[100][100];
    int v;
}g;
typedef struct graph graph;
struct reference{
    char source;
    char dest;
    char status;
    char cost;
}w[100];
typedef struct reference reference;
int initialize(graph g,reference *w,int v){
    int i,j;
    for(i=0;i<g.v;i++){
        w[i].source=v;
        w[i].dest=i;
        w[i].status='?';
        if(g.w[v][i]!=0) w[i].cost=g.w[v][i];
        else w[i].cost='&';
    }
    w[v].source='*';
    w[v].cost=0;
    w[v].status='!';
}
int FindMin(graph g, reference *w,int v){
    int minpos=-1,i,j;
    for(i=0;i<g.v;i++){
        if(w[i].status=='?'){
            minpos=i;
            break;
        }
    }
    for(j=0;j<g.v;j++){
        if(w[j].status=='?')
            if(w[j].cost<w[minpos].cost) minpos=j;
    }
    return minpos;
}
int update(graph g,reference *w, int v){
    int i,j;
    w[v].status='!';
    for(i=0;i<g.v;i++){
        if(g.w[v][i]!=0 && w[i].status=='?'){
            if(w[i].cost>g.w[v][i]){
                w[i].cost=g.w[v][i];
                w[i].source=v;
            }
        }
    }
}
int MST_Prim(graph g,reference *w,int v){
    int minpos;
    initialize(g,w,v);
    while (1)
    {
        minpos=FindMin(g,w,v);
        if(minpos==-1){
            return 0;
        }
        update(g,w,minpos);
    }
}
void weight_Prim(graph g,reference *w,int v){
    int i,wt=0;
    printf("\nThe minimal spanning tree is:");
    for(i=0;i<g.v;i++){
        if(w[i].source!='*')
            printf("%d->%d,",w[i].source+1,w[i].dest+1);
    }
    for(i=0;i<g.v;i++){
        wt+=w[i].cost;
    }
    printf("\nWeight of the MST is: %d",wt);
}
void main(){
    int i,j;
    printf("\nEnter the number of nodes: ");
    scanf("%d",&g.v);
    printf("\nWeighted Matrix Input=>");
     for ( i = 0;i<g.v;i++){
        printf("\nIf %d is connected to:",i+1);
        for( j = 0;j<g.v;j++){
            if(i==j){
                g.w[i][j] =0;
                continue;
            }
            else
            {
                printf("\n%d input weight:",j+1);
                scanf("%d",&g.w[i][j]);
            }
        }
    }
    MST_Prim(g,w,0);
    weight_Prim(g,w,0);
}
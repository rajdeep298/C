/*C program to implement Dijkstra's Algorithm*/
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
int a[100],k=0;
typedef struct reference reference;
void checkAndPrint_ShortestPath_Djikstra(graph g,reference *,int v,int source,int dest);
void findShortestPath_Djikstra(graph g,reference *w,int v);
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
void update(graph g,reference *w, int v){
    int i,j;
    w[v].status='!';
    for(i=0;i<g.v;i++){
        if(g.w[v][i]!=0 && w[i].status=='?'){
            if(w[i].cost>(g.w[v][i]+w[v].cost)){
                w[i].cost=g.w[v][i]+w[v].cost;
                w[i].source=v;
            }
        }
    }
}
int Dijkstra(graph g,reference *w,int v){
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
void findShortestPath_Djikstra(graph g,reference *w,int v){
    int i,j,source,dest,min;
    printf("\nEnter the source node: ");
    scanf("%d",&source);
    printf("\nEnter the destination node: ");
    scanf("%d",&dest);
    source--;
    dest--;
    while(1){
        for(i=0;i<g.v;i++){
            if(w[i].dest==dest){
                if(k==0)a[k++]=dest;
                a[k++]=w[i].source;
                checkAndPrint_ShortestPath_Djikstra(g,w,v,source,dest);
                dest=w[i].source;
                break;
            }
        }
    }
    
}
void checkAndPrint_ShortestPath_Djikstra(graph g,reference *,int v,int source,int dest){
    int i,j;
    if(a[k-1]==source){
        printf("\nShortest Path from %d to %d is: ",a[k]+1,a[0]+1);
        for(i=k-1;i>-1;i--){
            printf("%d->",a[i]+1);
        }
        printf("\n");
        exit(0);
    }
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
    Dijkstra(g,w,0);
    findShortestPath_Djikstra(g,w,0);
}
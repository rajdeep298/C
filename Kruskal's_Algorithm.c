#include <stdio.h>
#include <stdbool.h>
struct graph
{
    int w[100][100];
    char v_status[100][100];
    int v;
}g;
typedef struct graph graph;
struct edgeList{
    int source;
    int dest;
    int weight;
    bool status;
}e[100];
int e_len=0;
typedef struct edgeList edgeList;
struct MST_result{
    int source;
    int dest;
    int weight;
    bool status;
}r[100];
typedef struct MST_result MST_result;
int r_len=0;
void copy_structure(edgeList *e, MST_result *r,int min){
    r[r_len].source=e[min].source;
    r[r_len].dest=e[min].dest;
    r[r_len].weight=e[min].weight;
    r[r_len].status=e[min].status;
    r_len++;
}
void create_graph(graph g){
    printf("Enter the number of vertices: ");
    scanf("%d",&g.v);
    printf("Enter the adjacency matrix: \n");
    for(int i=0;i<g.v;i++){
        for(int j=0;j<g.v;j++){
            for( j = 0;j<g.v;j++){
                if(i==j){
                    g.w[i][j] =0;
                    continue;
                }
                else
                {
                    printf("\n%d press weights:",j+1);
                    scanf("%d",&g.w[i][j]);
                    g.v_status[i][j]='*';
                }
            }
        }
    }
}
void getEdgeList(graph g, edgeList *e){
    e_len=0;
    for(int i=0;i<g.v;i++){
        for(int j=0;j<g.v;j++){
            if(g.w[i][j]!=0 && g.v_status[i][j]!='!' && g.v_status[j][i]!='!'){
                e[e_len].source=i;
                e[e_len].dest=j;
                e[e_len].weight=g.w[i][j];
                e[e_len].status=false;
                e_len++;
            }
        }
    }
}
int FindMinEdge(edgeList *e){
    int minPos=0,i,j;
    for(i=0;i<e_len;i++){
        if(e[i].status==false){
            minPos=i;
            break;
        }
    }
    for(i=0;i<=e_len;i++){
        if(e[i].status==false){
            minPos=i;
        }
    }
    if(i>e_len){
        return -1;
    }
    for (j = i+1; i <=e_len ; i++)
    {
        if(e[i].status==false && e[i].weight<e[minPos].weight){
            minPos=i;
        }
    }
    return minPos;
}
void getMST_Kruskal(graph g,edgeList *e){
    int c[100],minPos,maxCompNo,minCompNo;
    int n =0;
    create_graph(g);
    getEdgeList(g,e);
    while(n!=g.v-1){
        minPos=FindMinEdge(e);
        e[minPos].status=true;
        if(c[e[minPos].source]!=c[e[minPos].dest]){
            minCompNo=(c[e[minPos].source]<c[e[minPos].dest])?c[e[minPos].source]:c[e[minPos].dest];
            maxCompNo=(c[e[minPos].source]>c[e[minPos].dest])?c[e[minPos].source]:c[e[minPos].dest];
            for(int i=0;i<g.v;i++){
                if(c[i]==maxCompNo){
                    c[i]=minCompNo;
                }
            }
            copy_structure(e,r,minPos);
            n++;
        }
    }
}
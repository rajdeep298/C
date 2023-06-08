#include<stdio.h>
struct graph
{
    char a[100][100];
    int v;
}g;
typedef struct graph graph;
void create_graph(){
    int i,j;
    printf("\nEnter the number of nodes: ");
    scanf("%d",&g.v);
    printf("\nWeighted Matrix Input=>");
     for ( i = 0;i<g.v;i++){
        printf("\nIf %d is connected to:",i+1);
        for( j = 0;j<g.v;j++){
            if(i==j){
                g.a[i][j] =0;
                continue;
            }
            else
            {
                printf("\n%d input weight:",j+1);
                scanf("%d",&g.a[i][j]);
            }
        }
    }
}
void Floyd_Warshall(graph g){
    int i,j,k;
    char p[100][100];
    for(i=0;i<g.v;i++){
        for(j=0;j<g.v;j++){
            if(g.a[i][j]==0 && i!=j)p[j][j] ='&';
            else if(g.a[i][j]==0 && i==j)p[i][j] ='0';
            else p[i][j]=g.a[i][j];
        }
    }
    for(k=0;k<g.v;k++){
        for(i=0;i<g.v;i++){
            for(j=0;j<g.v;j++){
                if(p[i][j]>g.a[i][k]+g.a[k][j]){
                    p[i][j]=g.a[i][k]+g.a[k][j];
                }
            }
        }
    }
    printf("\nAll Pair Shortest Path=>\n");
    for(i=0;i<g.v;i++){
        for(j=0;j<g.v;j++){
            printf("%d,",p[i][j]);
        }
        printf("\n");
    }
}
int main(){
    create_graph();
    Floyd_Warshall(g);
    return 0;
}
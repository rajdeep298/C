#include<stdio.h>
#include<string.h>
struct graph{
    int a[100][100];
    int n;
}g;
struct color{
    char color_name[100];
    int vertex;
    char status;
}c[100];
void graph_colouring_method();
void graph_colouring_method(){
    int i, j,k;
    printf("\nEnter the number of vertices:");
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
    }
    c[0].vertex=0;
    c[0].status='!';
    
}
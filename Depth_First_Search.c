#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct reference {
    char source;
    char dest; 
    char status;
}w[100];
struct graph{
    int a[100][100];
    int n;
}g;
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
void Depth_First_Search();
void print_data();
void Depth_First_Search(){
    int i,j,s;
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
    }
        for(i=0;i<g.n;i++){
            w[i].source=0;
            w[i].dest='?';
            w[i].status='?';
        }
        w[0].source='*';
        w[0].status='!';
        push(0);
        // printf("\nOutput-1:Traversal_List=> ");
        while(top>-1){
            s=pop();
            w[s].status='!';
            w[s].dest=s;
            // printf("%d,",s+1);
            for(i=0; i<g.n;i++){
                if(g.a[s][i]!=0 &&w[i].status!='!' &&w[i].dest=='?'){
                    push(i);
                    w[i].status='#';
                    w[i].source=s;
                }
            }
            int count=0;
            for(j=0;j<g.n;j++){
                if(w[j].status=='!') count++;
                if(count==g.n)
                {
                    print_data();
                    top=-1;
                    break;
                }
            }
        }
}
void print_data(){
    int i,out_a[100][100],j;
    printf("\nOutput:Edge_list=> ");
    for(i=0;i<g.n;i++){
        if(w[i].source!='*' && w[i].dest!='?'){
            printf("%d\t%d,",w[i].source+1,w[i].dest+1);
        }
    }
    // printf("\nOutput-3:Adjacency_Matrix=>\n");
    // for(i=0;i<g.n;i++)
    // {
    //     for(j=0;j<g.n;j++){
    //         if(i==j){
    //             out_a[i][j]=0;
    //         }
    //         else{
    //             if(w[j].dest==i && w[j].source!='*' || w[j].source==i){
    //                 if(w[j].dest!=i) out_a[i][w[j].dest]=1;
    //                 else out_a[i][w[j].source]=1;
    //             }
    //         }
    //     }
    // }
    // for(i=0;i<g.n;i++){
    //     for(j=0;j<g.n;j++){
    //         printf("%d\t",out_a[i][j]);
    //     }
    //     printf("\n");
    // }
}
void main(){
    Depth_First_Search();
}
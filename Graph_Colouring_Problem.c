#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct colours {
    char str[100];
    char status;
}c[100];
struct graph {
    int a[100][100];
    int n;
}g;
void Graph_Colouring_Problem();
void Graph_Colouring_Problem(){
    printf("\nEnter the number of vertices:");
    scanf("%d", &g.n);
}
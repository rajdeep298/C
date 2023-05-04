#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

int graph[MAX_VERTICES][MAX_VERTICES];
int color[MAX_VERTICES];

int min_color = MAX_VERTICES; // initialize with large number
int used_colors[MAX_VERTICES];

void graph_coloring(int vertex, int num_vertices, int num_colors) {
    if (vertex == num_vertices) {
        // check number of used colors
        int count = 0;
        for (int i = 0; i < num_vertices; i++) {
            if (color[i] != 0) {
                count++;
            }
        }
        if (count < min_color) {
            // update minimum color count and used colors
            min_color = count;
            for (int i = 0; i < num_vertices; i++) {
                used_colors[i] = color[i];
            }
        }
        return;
    }

    for (int c = 1; c <= num_colors; c++) {
        // check if color c can be used for vertex
        int is_safe = 1;
        for (int i = 0; i < vertex; i++) {
            if (graph[vertex][i] && color[i] == c) {
                is_safe = 0;
                break;
            }
        }
        if (is_safe) {
            color[vertex] = c;
            graph_coloring(vertex + 1, num_vertices, num_colors);
            color[vertex] = 0;
        }
    }
}

int main() {
    int num_vertices, num_colors,i,j;

    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &num_vertices);

    printf("Enter the adjacency matrix of the graph:\n");
    for (i = 0; i < num_vertices; i++) {
        for (j = 0; j < num_vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    num_colors=num_vertices;

    graph_coloring(0, num_vertices, num_colors);

    printf("Minimum color required: %d\n", min_color);

    printf("Colors that are used: ");
    for (i = 0; i < num_vertices; i++) {
        printf("%d ", used_colors[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#define V 100
int graph[V][V];
int n;  
int minKey(int key[], bool mstSet[]) {
    int min = INT_MAX, min_index;
    int v;
    for (v = 0; v < n; v++) {
        if (mstSet[v] == false && key[v] < min) {
            min = key[v];
            min_index = v;
        }
    }
    return min_index;
}
void printMST(int parent[]) {
	int i ,sum;
    printf("Edge \tWeight\n");
    for (i = 1; i < n; i++) {
        printf("%d - %d \t%d \n", parent[i], i, graph[i][parent[i]]);
        sum+=graph[i][parent[i]];
    }
    printf("\n TOTAL cost=%d",sum-1);
} 
void primMST() {
    int parent[V];  
    int key[V];     
    bool mstSet[V]; 
	int i,v,count; 
    for (i = 0; i < n; i++) {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }
    key[0] = 0;     
    parent[0] = -1;
    for (count = 0; count < n - 1; count++) {
        int u = minKey(key, mstSet);
        mstSet[u] = true;
        for (v = 0; v < n; v++) {
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }
    printMST(parent);
}
int main() {
	int i,j;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    primMST();
    return 0;
}
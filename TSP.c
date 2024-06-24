#include <stdio.h>
#include <limits.h>
#define V 4 
int min(int x, int y) {
    return (x < y) ? x : y;
}
int tsp(int graph[][V], int mask, int pos, int dp[][V]) {
    if (mask == (1 << V) - 1) 
        return graph[pos][0];
    if (dp[mask][pos] != -1)
        return dp[mask][pos];
    int ans = INT_MAX;
    for (int city = 0; city < V; city++) {
        if ((mask & (1 << city)) == 0) {
            int newAns = graph[pos][city] + 
            tsp(graph, mask | (1 << city), city, dp);
            ans = min(ans, newAns);
        }
    }
    return dp[mask][pos] = ans;
}
int main() {
    int graph[V][V] = {
        {0, 10, 15, 20},
        {5, 0, 9, 10},
        {6, 13, 0, 12},
        {8, 8, 9, 0}
    };
    int dp[1 << V][V];
    for (int i = 0; i < (1 << V); i++)
        for (int j = 0; j < V; j++)
            dp[i][j] = -1;
    int mask = 1;
    int pos = 0;
    int ans = tsp(graph, mask, pos, dp);
    printf("Minimum weight Hamiltonian Cycle: %d\n", ans);
    return 0;
}

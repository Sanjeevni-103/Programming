#include<stdio.h>
int max(int a, int b) {
   if(a>b){
      return a;
   } else {
      return b;
   }
}
int knapsack(int W, int weight[], int profit[], int n) {
   int i, w;
   int knap[n+1][W+1];
   for (i = 0; i <= n; i++) {
      for (w = 0; w <= W; w++) {
         if (i==0 || w==0)
            knap[i][w] = 0;
         else if (weight[i-1] <= w)
            knap[i][w] = max(profit[i-1] + knap[i-1][w-weight[i-1]], knap[i-1][w]);
         else
            knap[i][w] = knap[i-1][w];
      }
   }
   return knap[n][W];
}
int main() {
   int profit[] = {1,2,5,6};
   int weight[] = {2,3,4,5};
   int W = 8;
   int n = sizeof(profit)/sizeof(profit[0]);
   printf("The solution is : %d", knapsack(W, weight, profit, n));
   return 0;
}
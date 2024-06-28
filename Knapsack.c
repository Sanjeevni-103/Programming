#include<stdio.h>
#include<stdlib.h>
typedef struct{
    float profit, weight; 
    
}item;
int compare(const void *a, const void *b){
    item*it1=(item*)a;
    item*it2=(item*)b;
    float ratio1=it1->profit/it1->weight;
    float ratio2=it2->profit/it2->weight;
    if(ratio1<ratio2){  return 1;   }
    if(ratio1>ratio2){  return -1;  }
    else{
        return 0;
    }

}
float FractionalKnapSack(item items[], int n, float w){
    qsort(items, n, sizeof(item), compare);
    float TotalVal=0.0;
    float CurrentWt=0.0;
    for(int i=0; i<n; i++){
        if(CurrentWt+items[i].weight<=w){
            CurrentWt+=items[i].weight;
            TotalVal+=items[i].profit;
        }
        else{
            float remain=w-CurrentWt;
            TotalVal+=items[i].profit*(remain/items[i].weight);
            break;
        }
    }
    return TotalVal;
}
int main(){
    int n;
    float w;
    printf("Enter the number of items:-  ");
    scanf("%d", &n);
    item items[n];
    printf("Enter the weight and value of  each items: --  \n");
    for(int i=0; i<n; i++){
        printf("Enter the weight of item %d: -  ", i+1);
        scanf("%f", &items[i].weight);
    }
    for(int i=0; i<n; i++){
        printf("Enter the profit of item %d: -  ", i+1);
        scanf("%f", &items[i].profit);
    }
    printf("Enter the maxm. permissible weight of the knapsack:-  ");
    scanf("%f", &w);
    float MaxProfit=FractionalKnapSack(items, n, w);
    printf("The maximum profit in this knapsack arrangement is: -  %0.3f", MaxProfit);
    return 0;
}
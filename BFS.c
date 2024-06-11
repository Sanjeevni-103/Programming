#include<stdio.h>
#include<stdlib.h>
struct queue{
    int front;
    int rear;
    int size;
    int *arr;
};
void showQueue(struct queue *q){
    int i=0;
    for(i=0;i<=q->rear;i++){
        printf("%d ",q->arr[i]);
    }
}
int isFull(struct queue *q){
    if(q->rear==(q->size)-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct queue *q){
    if(q->front==q->rear){ 
        return 1;
    }
    else{
        return 0;
    }
}
void Enqueue(struct queue *q,int value){
    if(isFull(q)){
        printf("\nQUEUE OVERFLOW.");
    }
    else{
        q->rear+=1;
        q->arr[q->rear]=value;
    }
}
int Dqueue(struct queue *q){
    int popVal=-1;
    if(isEmpty(q)){
        printf("\nQUEUE UNDERFLOW.");
    }
    else{
        q->front+=1;
        popVal=q->arr[q->front];
        
    }
    return popVal;
}
int main(){
    struct queue *q;
    q->size=10;
    q->front=q->rear=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));

    int node,i,j,k;
    i=5;
    int visited[7]={0,0,0,0,0,0,0};
    int a[7][7];
    printf("\nenter the graph:");
    for(j=0;j<7;j++){
        for(k=0;k<7;k++)
            scanf("%d",&a[j][k]);
    }
    printf("The BFS of the above graph is :-\n");
    printf("%d ",i);
    visited[i]=1;
    Enqueue(q,i);
    while(!isEmpty(q)){
        int node=Dqueue(q);
        for(j=0;j<7;j++){
            if(a[node][j]==1 && visited[j]==0){
                printf("%d ",j);
                visited[j]=1;
                Enqueue(q,j);
            }
        }
    }
    return 0;
}
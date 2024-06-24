# include<stdio.h>
int main(){
    int n;
    int arr[10];
    printf("Enter the number of elements :- ");
    scanf("%d",&n);
    for (int i =1;i<=n;i++){
        printf("Enter element %d :- ",i);
        scanf("%d",&arr[i]);

    }
    for( int j=1;j<=n;j++){
        printf("%d, ",arr[j]);
    }
    return 0;

}
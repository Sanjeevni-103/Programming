//Write a C program to find the maximum element from an array
#include<stdio.h>
int main(){
    int arr[5];
    int max;
    printf("Enter the elements of the array :- ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=1;i<5;i++){
        
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("Maximum element of the array is %d ",max);
    return 0;
}

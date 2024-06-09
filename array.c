/*write a program to find the sum of all the elements of the array.*/
#include<stdio.h>
int main(){
    int arr[5];
    int sum=0;
    printf("Enter the elements of the array :- ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("Sum of the elements of the array is %d ",sum);
}


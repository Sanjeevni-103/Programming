//Write a program to reverse the elements of the array.
#include<stdio.h>
int main(){
    int i,j;
    int arr1[] = {1,2,3,4,5};
    int arr2[5];
    for(i=4,j=0;i>=0,j<5;i--,j++) {
        arr2[j]=arr1[i];
    }
    printf("Reversed array is :- ");
    for(i=0;i<5;i++){
        printf("%d ",arr2[i]);
    }
    return 0;

}
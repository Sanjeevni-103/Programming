//write a program to store 5 integers using malloc and print them.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)malloc(5*(sizeof(int)));
    printf("Enter 5 integers :- ");
    for(int i=0;i<5;i++){
        scanf("%d",ptr+i);
    }
    printf("Integers are :- ");
    for(int i=0;i<5;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
    

}
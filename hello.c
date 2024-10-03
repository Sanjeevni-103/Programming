//Write a program that keep taking numbers as input, until user enters an odd number.
//Write a program to print factorial of a given number using recursion.
//Write a program to print sum of digits of a number.
#include<stdio.h>
int one(){
    int num;
    do{
        printf("Enter number :- ");
        scanf("%d",&num);
    }while(num%2==0);
    return 0;
}
int factorial(int n){
    
    if(n==0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}
int main(){
    int n;
    printf("Enter a positive number :- ");
    scanf("%d",&n);
    int fact =factorial(n);
    printf("THe factorial of %d is %d ",n,fact);
    return 0;
}



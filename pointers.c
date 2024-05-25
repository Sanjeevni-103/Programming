//Write a program to add two numbers using pointers.
//write a program to swap two numbers using pointers.
//write a program to store details(name,roll, cgpa) of 3 three students using structure.
//write a program to read 5 integers from a file.
//write a program to input details of a student from a user and write it in file.
//write a program to store 5 integers using malloc and print them.
#include<stdio.h>
int sum(int *first,int *second){
    int sum=*first + *second;
    printf("Sum is %d",sum);
    return 0;

}
int main(){
    int *first,*second,a,b;
    printf("Enter first number :- ");
    scanf("%d",&a);
    printf("Enter second number :- ");
    scanf("%d",&b);
    first=&a;
    second=&b;
    sum(first,second);
    return 0;
}
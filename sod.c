#include<stdio.h>
int main(){
    int num,rev, sum=0;
    printf("Enter a number :- ");
    scanf("%d",&num);
    int c=num;
    while(num>0){
        rev=num%10;
        sum=sum+rev;
        num=num/10;
    }
    printf("Sum of the digits of %d is %d ",c,sum);
    return 0;
}
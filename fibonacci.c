//write a program to print fibonacci series.
#include<stdio.h>
int main(){
    int a=0,b=1,num,sum=0;
    printf("Enter the range :- ");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}    



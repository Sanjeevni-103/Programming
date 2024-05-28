#include<stdio.h>
int main(){
    int num,i,flag=0;
    printf("Enter a number :- ");
    scanf("%d",&num);
    if(num==0||num==1){
        flag=1;
    }
    for(i=2;i<num/2;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("%d is a prime number ",num);
    }
    else{
        printf("%d is not a prime number",num);
    }
    return 0;
}
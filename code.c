#include<stdio.h>
int main(){
    int a[]={71,72,73,74,75};
    int length=sizeof(a)/sizeof(a[0]);
    int b[5];
    int index;
    printf("First array is :- \n");
    for(int i=0;i<length;i++){
        printf("%d ",a[i]);
    }
    printf("\nEnter a number within (1-5) :- ");
    scanf("%d",&index);
    for(int i=0;i<length;i++){
        int num=a[i]%10;
        if(num==index){
            b[num]=1;
        }
        else{
            b[num]=0;
        }
    }
    printf("Second array is :- \n");
    for(int i=0;i<5;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
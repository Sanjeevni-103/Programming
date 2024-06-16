//Write a program to print the odd places charecters of your name.
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="subham";
    int length=strlen(str);
    for(int i =0;i<length;i++){
        if(i%2==0){
            printf("%c",str[i]);
        }
    }
    return 0;
}
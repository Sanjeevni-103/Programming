//Write a C program to reverse a string.
#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    char str1[]="sanjeevni";
    int length=strlen(str1);
    for(i=0,j=length-1;i<=j;i++,j--){
        char temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
    }
    printf("%s",str1);
    return 0;
}
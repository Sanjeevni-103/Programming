//Write a C program to check whether a string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="subham";
    int i,j;
    int length=strlen(str);
    char newstr[10];
    strcpy(newstr,str);
    for(i=0,j=length-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    int l=strcmp(newstr,str);
    if(l==0){
        printf("String is palidrome");
    }
    else{
        printf("String is not palindrome ");
    }
    
    return 0;
}
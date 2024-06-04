//Write a program in which two index value is entered by user and the sliced string is returned.
#include<stdio.h>
#include<string.h>
int main(){
    int n,m,i;
    char str[50];;
    printf("Enter your name :- ");
    scanf("%s",str);
    printf("Enter starting index :- ");
    scanf("%d",&n);
    printf("Enter ending index :- ");
    scanf("%d",&m);
    
    for(i=n;i<=m;i++){
        printf("%c",str[i]);
    }
    return 0;


} 

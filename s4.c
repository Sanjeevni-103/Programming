//Write a program to check wheather a charecter is presnt in the string or not.
#include<stdio.h>
#include<string.h>
void check(char str[]){
    char a;
    printf("Enter the charecter to check :- ");
    scanf("%c",&a);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==a){
            printf("Yes the charecter is present");
            return;
        }
    }
    printf("Charecter is not present");

}
int main(){
    char str[] = "subham";
    check(str);
    return 0; 
}
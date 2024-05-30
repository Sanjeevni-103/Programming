//Write a program to find the numbers of vowels and consonents in your name.
#include<stdio.h>
#include<string.h>
int main(){
    int vowel=0,cons=0;
    char name[50];
    printf("Enter your name :- ");
    scanf("%s",name);
    for(int i=0;name[i]!='\0';i++){
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
            vowel++;
        }
        else{
            cons++;
        }
        

    }
    printf("Number of vowels in your name is %d\n",vowel);
    printf("Number of consonents in your name is %d",cons);
    return 0; 
}
//Write a program to find the length of a name entered by user.
//Write a program to find the numbers of vowels and consonents in your name.
//Write a program in which two index value is entered by user and the sliced string is returned.
//Write a program to check wheather a charecter is presnt in the string or not.
//Write a C program to concatenate two strings.
//Write a C program to reverse a string.
//Write a C program to check whether a string is palindrome or not.
//Write a program to print the odd places charecters of your name.
//strlen(str), strcpy(newstr,oldstr), strcat(firstStr,secStr), strcmp(firstStr,secStr)
#include<stdio.h>
int main(){
    char name[50];
    int count = 0;
    printf("Enter your name :- ");
    scanf("%s",name);
    for(int i=0;name[i]!='\0';i++){
        count+=1;
    }
    printf("Length of your name is %d ",count);
    return 0;
}                                                     
                          
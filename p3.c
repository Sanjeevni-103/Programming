//write a program to store details(name,roll, cgpa) of 3 three students using structure.
#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float cgpa;
}; 

int main() {
    int i;
    struct student std[5];
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 3; i++) {
        
        printf("Enter name of student %d :- ",i+1);
        scanf("%s", std[i].firstName);
        printf("Enter roll number :- ");
        scanf("%d",&std[i].roll);
        printf("Enter cgpa :- ");
        scanf("%f", &std[i].cgpa);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", std[i].roll);
        printf("Name :- ");
        puts(std[i].firstName);
        printf("cgpa :- %f", std[i].cgpa);
        printf("\n");
    }
    return 0;
}

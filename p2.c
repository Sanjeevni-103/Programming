//write a program to swap two numbers using pointers.
#include <stdio.h>
int main() {
    int a, b, temp;
    int *ptr1, *ptr2;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore swapping a = %d and b = %d", a, b);
    // Assign the memory address of a and b to *ptr1 and *ptr2
    ptr1 = &a;
    ptr2 = &b;
    // Swap the values a and b
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("\nAfter swapping a = %d and b = %d", a, b);
    return 0;
}
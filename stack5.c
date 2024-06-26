#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

typedef struct {
    int stack[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, int value) {
    s->stack[++s->top] = value;
}

int pop(Stack *s) {
    if (!isEmpty(s)) {
        return s->stack[s->top--];
    }
    return -1; // Return a sentinel value to indicate an error (stack underflow).
}

int evaluatePostfix(char postfix[]) {
    Stack operandStack;
    initialize(&operandStack);
    
    for (int i = 0; postfix[i] != '\0'; i++) {
        char currentChar = postfix[i];
        
        if (isdigit(currentChar)) {
            push(&operandStack, currentChar - '0'); // Convert char digit to int
        } else if (currentChar == ' ') {
            continue;
        } else {
            int operand2 = pop(&operandStack);
            int operand1 = pop(&operandStack);
            
            switch (currentChar) {
                case '+':
                    push(&operandStack, operand1 + operand2);
                    break;
                case '-':
                    push(&operandStack, operand1 - operand2);
                    break;
                case '*':
                    push(&operandStack, operand1 * operand2);
                    break;
                case '/':
                    push(&operandStack, operand1 / operand2);
                    break;
                default:
                    printf("Invalid operator: %c\n", currentChar);
                    exit(1);
            }
        }
    }
    
    return pop(&operandStack); // The final result is left in the stack
}

int main() {
    char postfix[MAX_SIZE];
    
    printf("Enter a postfix expression: ");
    fgets(postfix, MAX_SIZE, stdin);
    
    int result = evaluatePostfix(postfix);
    
    printf("Result: %d\n", result);
    
    return 0;
}

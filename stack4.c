#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct {
    char stack[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, char value) {
    s->stack[++s->top] = value;
}

char pop(Stack *s) {
    if (!isEmpty(s)) {
        return s->stack[s->top--];
    }
    return '\0';
}

int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int precedence(char c) {
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    return 0;
}

void infixToPostfix(char infix[], char postfix[]) {
    Stack operatorStack;
    initialize(&operatorStack);
    
    int postfixIndex = 0;
    
    for (int i = 0; infix[i] != '\0'; i++) {
        char currentChar = infix[i];
        
        if (currentChar == ' ') {
            continue;
        }
        
        if (isdigit(currentChar) || isalpha(currentChar)) {
            postfix[postfixIndex++] = currentChar;
        } else if (currentChar == '(') {
            push(&operatorStack, currentChar);
        } else if (currentChar == ')') {
            while (!isEmpty(&operatorStack) && operatorStack.stack[operatorStack.top] != '(') {
                postfix[postfixIndex++] = pop(&operatorStack);
            }
            if (!isEmpty(&operatorStack) && operatorStack.stack[operatorStack.top] == '(') {
                pop(&operatorStack);
            }
        } else if (isOperator(currentChar)) {
            while (!isEmpty(&operatorStack) && precedence(operatorStack.stack[operatorStack.top]) >= precedence(currentChar)) {
                postfix[postfixIndex++] = pop(&operatorStack);
            }
            push(&operatorStack, currentChar);
        }
    }
    
    while (!isEmpty(&operatorStack)) {
        postfix[postfixIndex++] = pop(&operatorStack);
    }
    
    postfix[postfixIndex] = '\0';
}

int main() {
    char infix[MAX_SIZE];
    char postfix[MAX_SIZE];
    
    printf("Enter an infix expression: ");
    fgets(infix, MAX_SIZE, stdin);
    
    infixToPostfix(infix, postfix);
    
    printf("Postfix expression: %s\n", postfix);
    
    return 0;
}

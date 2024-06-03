#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

typedef struct {
    char items[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, char c) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack overflow!\n");
        exit(EXIT_FAILURE);
    }
    s->items[++s->top] = c;
}

char pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow!\n");
        exit(EXIT_FAILURE);
    }
    return s->items[s->top--];
}

int precedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

void infixToPrefix(char *infix, char *prefix) {
    Stack operatorStack;
    initialize(&operatorStack);
    int i, j;
    j = 0;

    for (i = strlen(infix) - 1; i >= 0; i--) {
        char c = infix[i];

        if (isalnum(c)) {
            prefix[j++] = c;
        } else if (c == ')') {
            push(&operatorStack, c);
        } else if (c == '(') {
            while (!isEmpty(&operatorStack) && operatorStack.items[operatorStack.top] != ')') {
                prefix[j++] = pop(&operatorStack);
            }
            if (!isEmpty(&operatorStack))
                pop(&operatorStack); // Pop '('
        } else if (isOperator(c)) {
            while (!isEmpty(&operatorStack) && precedence(operatorStack.items[operatorStack.top]) > precedence(c)) {
                prefix[j++] = pop(&operatorStack);
            }
            push(&operatorStack, c);
        }
    }

    while (!isEmpty(&operatorStack)) {
        prefix[j++] = pop(&operatorStack);
    }

    prefix[j] = '\0';

    // Reverse the prefix expression
    int len = strlen(prefix);
    for (i = 0; i < len / 2; i++) {
        char temp = prefix[i];
        prefix[i] = prefix[len - i - 1];
        prefix[len - i - 1] = temp;
    }
}

int main() {
    char infix[MAX_SIZE], prefix[MAX_SIZE];

    printf("Enter infix expression: ");
    fgets(infix, MAX_SIZE, stdin);

    // Remove trailing newline if any
    if (infix[strlen(infix) - 1] == '\n')
        infix[strlen(infix) - 1] = '\0';

    infixToPrefix(infix, prefix);
    printf("Prefix expression: %s\n", prefix);
    return 0;


}
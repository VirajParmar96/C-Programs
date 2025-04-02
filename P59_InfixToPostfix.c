#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = c;
}

char pop() {
    if (top == -1)
        return '\0';
    return stack[top--];
}

int precedence(char c) {
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    if (c == '^')
        return 3;
    return 0;
}

void infixToPostfix(char infix[]) {
    char postfix[MAX];
    int i = 0, j = 0;

    while (infix[i] != '\0') {
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        } else if (infix[i] == '(') {
            push(infix[i]);
        } else if (infix[i] == ')') {
            while (top != -1 && stack[top] != '(')
                postfix[j++] = pop();
            pop();
        } else {
            while (top != -1 && precedence(stack[top]) >= precedence(infix[i]))
                postfix[j++] = pop();
            push(infix[i]);
        }
        i++;
    }

    while (top != -1)
        postfix[j++] = pop();

    postfix[j] = '\0';
    printf("Postfix Expression: %s\n", postfix);
}

int main() {
    char infix[MAX];

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix);

    return 0;
}

// Output:
// Enter an infix expression: A+B*C
// Postfix Expression: ABC*+

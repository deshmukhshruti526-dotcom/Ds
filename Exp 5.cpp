#include <iostream>
#include <string>

#define MAX 100

char stack[MAX][100];
int top = -1;

void push(char page[]) {
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else {
        top++;
        strcpy(stack[top], page);
    }
}

void pop() {
    if (top == -1)
        printf("No previous page\n");
    else {
        printf("Back to: %s\n", stack[top]);
        top--;
    }
}

void display() {
    int i;
    printf("Browser History:\n");
    for (i = top; i >= 0; i--)
        printf("%s\n", stack[i]);
}

int main() {
    push("Google");
    push("YouTube");
    push("Wikipedia");
    push("GitHub");

    display();

    printf("\nBacktracking:\n");
    pop();
    pop();

    return 0;
}
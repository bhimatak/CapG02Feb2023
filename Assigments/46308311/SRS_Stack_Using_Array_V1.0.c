#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

bool isFull() {
    return top == MAX_SIZE - 1;
}

bool isEmpty() {
    return top == -1;
}

void push(int element) {
    if (isFull()) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = element;
}

int pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        int element;
        scanf("%d", &element);
        push(element);
    }
    printf("Original order: ");
    display();
    printf("Reversed order: ");
    while (!isEmpty()) {
        printf("%d ", pop());
    }
    printf("\n");
    return 0;
}

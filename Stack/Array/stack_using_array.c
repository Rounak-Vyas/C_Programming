
#include <stdio.h>
#include <string.h>

#define MAX 10

int stack[MAX];
int head = -1;

void push(int value) {
    if (head >= MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    head++;
    stack[head] = value;
}

void pop() {
    if (head == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("%d\n", stack[head]);
    head--;
}

void process_stack(int n) {
    char operation[10];
    int val;

    for (int i = 0; i < n; i++) {
        scanf("%s", operation);
        if (strcmp(operation, "push") == 0) {
            scanf("%d", &val);
            push(val);
        } else if (strcmp(operation, "pop") == 0) {
            pop();
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // Consume newline after number

    process_stack(n);
    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAX 10

int stack[MAX];
int head = -1;

void push(int value) {
    if (head >= MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    head++;
    stack[head] = value;
}

void pop() {
    if (head == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("%d\n", stack[head]);
    head--;
}

void process_stack(int n) {
    char operation[10];
    int val;

    for (int i = 0; i < n; i++) {
        scanf("%s", operation);
        if (strcmp(operation, "push") == 0) {
            scanf("%d", &val);
            push(val);
        } else if (strcmp(operation, "pop") == 0) {
            pop();
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // Consume newline after number

    process_stack(n);
    return 0;
}
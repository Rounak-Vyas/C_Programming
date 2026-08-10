#include <stdio.h>
#include <stdlib.h>

#define MAX 50
int stack[MAX];
int first = -1; // Acts as top of the stack

void push(int data);
int pop();
void fact(int num);

int main () {
    printf("Enter the number: ");
    int num;
    scanf("%d", &num);

    fact(num);

    // Print all factors until the stack is empty
    while (first != -1) {
        printf("%d ", pop());
    }
    printf("\n");

    return 0;
}

void push(int data) {
    if (first == MAX - 1) {
        printf("Stack full\n");
        exit(1);
    }
    first++;
    stack[first] = data; // Place at top of stack
}

int pop() {
    if (first == -1) {
        printf("Stack empty\n");
        exit(1);
    }
    int val = stack[first];
    first--; // Decrement top index after reading
    return val;
}

void fact(int num) {
    int i = 2; // minimum prime fact start is 2; 
    while (num != 1) { // until the num becomes one, which means, we have reached the last digit of prime numbers
        while (num % i == 0) {// start from 2 , check if its divisible(completely), it means its a prime factor of the given num
            push(i);//push the i value in the stack
            num = num / i; 
        }
        i++;
    }// until num does not become =1, the inner will loop will keeo on executing, with values of i
}
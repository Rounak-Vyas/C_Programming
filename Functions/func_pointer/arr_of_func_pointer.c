// Creates an array of function pointers

#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int execute_command(int a, int b, int cmd) {
    int result = 0;
    int (*array_of_operations[])(int,int) = {add, sub, mul, divide};
    result = array_of_operations[cmd](a,b);
    return result;
}

/*
int execute_command(int a, int b, int cmd) {
    int (*operations[4])(int, int) = { add, sub, mul, divide };
    return operations[cmd](a, b);
}
*/

int main() {
    int a, b, cmd;
    scanf("%d %d %d", &a, &b, &cmd);

    int result = execute_command(a, b, cmd);
    printf("%d", result);

    return 0;
}
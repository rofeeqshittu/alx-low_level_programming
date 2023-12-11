// 100-operations.c
#include <stdio.h>

// Addition
int add(int a, int b) {
    return a + b;
}

// Subtraction
int sub(int a, int b) {
    return a - b;
}

// Multiplication
int mul(int a, int b) {
    return a * b;
}

// Division
int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        fprintf(stderr, "Error: Division by zero\n");
        return 0;
    }
}

// Modulo
int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        fprintf(stderr, "Error: Modulo by zero\n");
        return 0;
    }
}


#include <stdio.h>
#include <stdlib.h>

int int_length(int num) {
    int length = 0;

    if (num == 0) {
        return 1; // Special case for handling 0
    }

    while (num != 0) {
        num /= 10;
        length++;
    }
    return length;
}

int *memory_allocation(int total_length) {
    int *mem_allocate;

    mem_allocate = (int *)malloc(sizeof(int) * total_length);
    if (mem_allocate == NULL) {
        return NULL; // Memory allocation failure
    }

    return mem_allocate;
}

int main(int argc, char *argv[]) {
    int *result;
    int num1, num2, i;
    int num1_length, num2_length, total_length;

    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    num1_length = int_length(num1);
    num2_length = int_length(num2);
    total_length = num1_length + num2_length;

    result = memory_allocation(total_length);
    if (result == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Multiplication Logic
    for (i = 0; i < total_length; i++) {
        result[i] = 0;
    }

    for (i = num2_length - 1; i >= 0; i--) {
        int carry = 0;
        int n2_digit = num2 % 10;
        num2 /= 10;

        int result_index = i + num1_length;
        
        for (int j = num1_length - 1; j >= 0; j--) {
            int n1_digit = num1 % 10;
            num1 /= 10;
            
            int product = n1_digit * n2_digit + result[result_index] + carry;
            carry = product / 10;
            result[result_index] = product % 10;
            result_index--;
        }
        
        result[result_index] = carry;
    }

    // Print the result
    for (i = 0; i < total_length; i++) {
        printf("%d", result[i]);
    }
    printf("\n");

    free(result);

    return 0;
}


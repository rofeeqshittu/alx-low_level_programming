#include <stdio.h>

int _puts(const char *str) {
    int num_chars = 0;
    while (*str) {
        putchar(*str++);
        num_chars++;
    }
    putchar('\n');
    num_chars++;
    return num_chars;
}

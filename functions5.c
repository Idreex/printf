#include "main.h"

int print_pointer(va_list list) {
    void *ptr = va_arg(list, void *);
    unsigned long address = (unsigned long)ptr;
    int len = 0;

    char hex_digits[] = "0123456789abcdef";
    char buffer[50];  // Assuming a maximum length for the buffer

    int i = 0;
    do {
        buffer[i++] = hex_digits[address % 16];
        address /= 16;
    } while (address != 0);

    len += printf("0x");
    for (int j = i - 1; j >= 0; j--) {
        len += printf("%c", buffer[j]);
    }

    return len;
}


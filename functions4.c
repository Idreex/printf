#include "main.h"

int print_custom_string_S(va_list list) {
    char *str = va_arg(list, char *);
    int len = 0;
	int i;
    char hexa[] = "0123456789ABCDEF";

    if (!str) {
        write(1, "(null)", 6);
        return 6;
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            if (len > INT_MAX - 5) {
                write(1, "\nLength exceeds INT_MAX\n", 24);
                return -1;
            }
            write(1, "\\x", 2);
            len += 2;
            if (str[i] < 16) {
                write(1, "0", 1);
                len++;
            }
            if (len > INT_MAX - 2) {
                write(1, "\nLength exceeds INT_MAX\n", 24);
                return -1;
            }
            fprintf(stdout, "%c%c", hexa[(str[i] >> 4) & 0x0F], hexa[str[i] & 0x0F]);
            len += 2;
        } else {
            if (len > INT_MAX - 1) {
                write(1, "\nLength exceeds INT_MAX\n", 24);
                return -1;
            }
            write(1, &str[i], 1);
            len++;
        }
    }
    return len;
}


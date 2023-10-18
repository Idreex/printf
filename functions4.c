#include "main.h"

int print_custom_string_S(va_list list) {
    char *str = va_arg(list, char *);
    int len = 0;
	int i;

    if (!str) {
        write(1, "(null)", 6);
        return 6;
    }

    i = 0;
    do {
        if (str[i] < 32 || str[i] >= 127) {
            write(1, "\\x", 2);
            len += 2;
            if (str[i] < 16) {
                write(1, "0", 1);
                len++;
            }
            fprintf(stdout, "%X", str[i]);
            len += 2;
        } else {
            write(1, &str[i], 1);
            len++;
        }
        i++;
    } while (str[i] != '\0');

    return len;
}


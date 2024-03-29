#ifndef main_h
#define main_h

#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

/**
 * struct format_specifiers - A struct to hold format specifiers
 * @type_specifier: The format specifier character
 * @print: A pointer to the function that handles the printing
 */

typedef struct format_specifiers
{
	/**
	 * @type_specifier: The format specifier character
     * @print: A pointer to the function that handles
	 */

	char type_specifier;
	int (*print)(va_list arg);
} print;

int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_modulus(va_list arg);
int print_int(va_list list);
int print_binary(va_list list);
int print_unsigned(va_list list);
int print_octal(va_list list);
int print_hex_lower(va_list list);
int print_hex_upper(va_list list);
int print_custom_string_S(va_list list);
int print_pointer(va_list list)

#endif

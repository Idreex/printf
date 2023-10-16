#ifndef main_h
#define main_h

#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct format_specifiers - A struct to hold format
 * @specifier_type: The format specifier character
 * @print: A pointer to the function that handles
 */

typedef struct format_specifiers
{
	char type_specifier;
	int (*print)(va_list arg);
}print;

int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_modulus(va_list arg);
int print_int(va_list list);
int print_binary(va_list list);

#endif

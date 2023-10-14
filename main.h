#ifndef main_h
#define main_h

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct format_specifiers - A struct to hold format
 * @specifier_type: The format specifier character
 * @print: A pointer to the function that handles
 */

typedef struct format_specifiers
{
	char specifier_type;
	int (*print)(va_list list);
} print;

int _printf(const char *format, ...);
int print_char(va_list list);
int print_str(va_list list);
int print_modulus(va_list list);

#endif


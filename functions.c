#include "main.h"

int print_char(va_list list)
{
	char c = va_arg(list, int);
	write(1, &c, 1);
	return (1);
}

int print_str(va_list list)
{
	char *str = va_arg(list, char *);
	if (str == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}

	int i = 0;

	for (i = 0; str[i]; i++)
	{
		write(1, &str[i], 1);
	}
	return (1);
}

int print_modulus(va_list list)
{
	char c = '%';
	write(1, &c, 1);
	return (1);
}

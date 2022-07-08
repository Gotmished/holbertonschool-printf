#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int print_s(va_list list)
{
	int count;
	char *a;

	a = va_arg(list, char *);
	if (a == NULL)
	{
		return (0);
	}
/*	printf("string to print: %s\n", va_arg(list, char *)); */

	count = 0;
	while (a[count] != '\0')
	{
		_putchar(a[count]);
		count = count + 1;
	}

	return (count);
}
/**
 * _printf - prints anything, followed by a new line
 * @format: a list of types of arguments passed to the function
 */

int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i, j, len, match;

	vars_t v[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(list, format);
	if (format == NULL)
	{
		return (-1);
	}

	len = 0;
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len = len + 1;
		}
		else
		{
			j = 0;
			while (v[j].t != NULL)
			{
				if (*(v[j].t) == format[i + 1])
				{
					match = v[j].f(list);
					len = len + match;
					i = i + 1;
					break;
				}
				j = j + 1;
			}
		}
		i = i + 1;
	}
	va_end(list);
	return (len);
}

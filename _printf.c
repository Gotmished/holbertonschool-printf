#include "headertest.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * func_string - print a string
 * @list: the list of arguments the function _printf is receiving
 * Return: the number of characteres of the string
 */

int print_c(va_list list)
{
	char ch;

	ch = va_arg(list, int);
	_putchar(ch);
	return (1);
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

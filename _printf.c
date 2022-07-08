#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_type - select the correct function depending on
 * char after %
 * @format: pointer to char in string passed
 * @list: pointer to list item
 * Return: int
 */

int print_type(const char *format, va_list list)
{
	unsigned int j = 0, count = 0, match;
	char str;

	vars_t v[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", conv_d},
		{"i", conv_d},
		{NULL, NULL}
	};
	str = *(format + 1);

	if (str == '%')
	{
		_putchar('%');
		count = count + 1;
		return (count);
	}
	if (str == '\0')
	{
		_putchar('\0');
	}
	j = 0;
	while (v[j].t != NULL)
	{
		if (*(v[j].t) == str)
		{
			match = v[j].f(list);
			return (match);
		}
		j = j + 1;
	}
	if (v[j].t == NULL)
	{
		_putchar('%');
		_putchar(str);
		count = count + 2;
	}
	return (count);
}

/**
 * _printf - prints anything, followed by a new line
 * @format: a list of types of arguments passed to the function
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i, len, match;


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
			match = print_type(format + i, list);
			i = i + 1;
			len = len + match;
		}
		i = i + 1;
	}
	va_end(list);
	return (len);
}

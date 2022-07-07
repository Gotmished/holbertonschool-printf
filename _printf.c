#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>



char *print_string(char *format, va_list *arg)
{
	char *str;

	str = va_arg(*arg, char*);
	if (!str)
	{
		return (NULL);
	}
	return (format);
}

char *print_sel(char *format, va_list *arg)
{
	int i = 0;

	s_func print_sel[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	while (print_sel[i].c != NULL)
	{
		if (*(print_sel[i].c) == *(format + 1))
		{
			return (print_sel[i].func(format, arg));
		}
		i++;
	}
	return (NULL);
}

/**
 * _printf - mimic of printf function.
 * @format: character string which may contain coversion
 * specifiers
 *Return: int
 */

int _printf(const char *format, ...)
{
	va_list ap;
	char * strcopy;
	int i = 0, len;

	strcopy = _strdup(format);
	va_start(ap, format);

	while (strcopy != NULL && (*(strcopy + i) != '\0'))
	{
		if (*(strcopy + i) == '%')
		{
			print_sel(strcopy + i, &ap);
		}
		i++;
	}
	len = _strlen(strcopy);
	_puts(strcopy);
	return (len);
}

#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>



char *print_string(char *format, va_list *arg)
{
	char *str;
	int len1, len2;

	len1 = _strlen(format);
	len2 = _strlen(va_arg(*arg, char*));

	str = malloc(sizeof(*str) * len1 + sizeof(*str) * len2 + 1);
	if (str == NULL || va_arg(*arg, char*) == NULL)
	{
		return (NULL);
	}
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

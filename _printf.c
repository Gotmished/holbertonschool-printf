#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

char *print_string(char *format, va_list *arg)
{
	char *str_copy, *str_arg;
	int len1, arg_len;

	len1 = _strlen(format);
	str_arg = va_arg(*arg, char*);

	if (str_arg == NULL)
	{
		return (NULL);
	}

	arg_len = _strlen(str_arg);

	str_copy = malloc(sizeof(*str_copy) * (len1 + 1));

	if (str_copy == NULL)
	{
		return (NULL);
	}

	_strcpy(str_copy, format);
	_strcpy(format, str_arg);
	format = format + arg_len;
	if (_strlen(str_copy) > 2)
	{
		_strcpy(format, str_copy + 2);
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

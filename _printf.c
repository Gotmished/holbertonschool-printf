#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

char *print_char(char *format, va_list *arg)
{
	char *chr;

	chr = malloc(sizeof(*chr) * _strlen(format) + 1);
	if (chr == NULL)
	{
		return (NULL);
	}
	
	printf("Print_char format: %s\n", format);
	printf("Print Char arg: %s\n", chr);
	*format = va_arg(*arg, int);
	return (format);
}

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
		printf("i: %d\n", i);
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
	len = _strlen(strcopy);
	va_start(ap, format);

	while (strcopy != NULL && (*(strcopy + i) != '\0'))
	{
		if (*(strcopy + i) == '%')
		{
			printf("%d", len);
			print_sel(strcopy + i, &ap);
		}
		i++;
	}
	_puts(strcopy);
	_putchar('\n');
	return (len);
}

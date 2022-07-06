#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

char *print_char(char *format, va_list *arg)
{
	char *chr;

	chr = va_arg(*arg, char*);
	printf("%s", chr);
	return (format);
}

char *print_string(char *format, va_list *arg)
{
	char *str;

	str = va_arg(*arg, char*);
	printf("%s", str);
	return (format);
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
	int i = 0, count = 0;

	s_func print_sel[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	strcopy = _strdup(format);
	va_start(ap, format);

	while (strcopy != NULL && (*(strcopy + i) != '\0'))
	{
		count = 0;
		if (*(strcopy + i) == '%')
			while (print_sel[count].c != NULL)
			{
				if (*(print_sel[count].c) == *(format + i + 1))
					printf("Found one: %c\n", *(format + i + 1));
				count++;
			}
		i++;
	}
	return (0);
}

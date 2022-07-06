#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	_putchar(c);
	return (1);

/*	char *chr;

	chr = va_arg(*arg, char*);
	printf("%s", chr);
	return (format); */
}

int print_string(va_list ap)
{
	int i;
	char *ptr;

	ptr = (va_arg(list, char *));
	if (ptr == 0)
	{
		ptr = "(null)";
	}
	i = 0;
	while (*(ptr + i) != 0)
	{
		_putchar(ptr[i]);
		i = i + 1;
	}
	return (i);

/*	char *str;

	str = va_arg(*arg, char*);
	printf("%s", str);
	return (format); */
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
	int i, j, len;

	s_func print_sel[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	strcopy = _strdup(format);
	len = _strlen(strcopy);
	va_start(ap, format);

	/* checks string for exceptional cases */
	i = 0;
	while (format != NULL && (*(format + i) != '\0'))
	{
		/* checks to see if a conversion specifier is present */
		if (*(format + i) != '%')
		{
			_putchar(*(format + i));
			len = len + 1;
		}
		else
		{
			/* ensures that list of conversion specifiers has not yet been exhausted */
			j = 0;
			while (print_sel[j].c != NULL)
			{
				/* checks for a match between list and the type given */
				if (*(print_sel[j].c) == *(format + i + 1))
				{
					print_sel[j].func(ap);
					i = i + 1;
					break;
/*					printf("Found one: %c\n", *(format + i + 1)); */
				}
				j = j + 1;
			}
		}
		i = i + 1;

	}
	_putchar('\n');
	return (len);
}

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_s - print a string passed through arg
 * @list: list pointer string
 * Return: int, count of string length
 */

int print_s(va_list list)
{
	int count;
	char *a;

	a = va_arg(list, char *);
	if (a == NULL)
	{
		a = "(null)";
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

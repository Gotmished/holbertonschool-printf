#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a line to the stdout
 *@str: str being passed through
 *Return: void
 */

void _puts(const char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
}

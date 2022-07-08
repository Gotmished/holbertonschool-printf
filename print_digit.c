#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_number - prints out a number just using putchar
 * @n: int being passed through
 *Return: void
 */

int print_d(long int n)
{
	if (!n)
	{
		return (0);
	}
	
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n / 10)
	{
		return (1 + print_d(n / 10));
	}

	_putchar((n % 10) + '0');
	return (1);
}

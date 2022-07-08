#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_d - prints out a number just using putchar
 * @n: int being passed through
 * Return: void
 */

int print_d(int n)
{
	long m, num;
	int c, count = 0;

	num = n;

	if (num < 0)
	{
		num = -(num);
		_putchar('-');
		count++;
	}

	m = 1;
	c = 1;
	while (c)
	{
		if (num / (m * 10) > 0)
			m *= 10;
		else
			c = 0;
	}

	while (num >= 0)
	{
		if (m == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
			count++;
		}
		else
		{
			_putchar((num / m % 10) + '0');
			m /= 10;
			count++;
		}
	}
	return (count);
}

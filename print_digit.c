#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_number - prints out a number just using putchar
 * @n: int being passed through
 *Return: void
 */

int print_d(int n)
{
	long m; /* power of 10 */
	int c; /* boolean check */
	long num; /* convert int to long */
	int count = 0;

	num = n;
	/* negatives */
	if (num < 0)
	{
		num = -(num);
		_putchar('-');
		count++;
	}

	/* count up */
	m = 1;
	c = 1;
	while (c)
	{
		if (num / (m * 10) > 0)
			m *= 10;
		else
			c = 0;
	}

	/* count down */
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

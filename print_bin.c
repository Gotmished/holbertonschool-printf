#include <stdio.h>
#include "main.h"

/**
 * print_d - prints out a number just using putchar
 * @n: int being passed through
 * Return: void
 */

int print_ld(long int n)
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

/**
 * print_b - converts a digit to binary
 * @lsit: arg to be passed through
 *Return: count of number of char printed
 */

int print_b(va_list list)
{
	long int number = va_arg(list,long int);

	long int count;
	unsigned long bin = 0, rem, mult = 1;

	if (number < 0)
	{
		number = -(number);
	}
	while (number != 0)
	{
		rem = number % 2;
		bin = bin + rem * mult;
		mult = mult * 10;
		number = number / 2;
	}

	count = print_ld(bin);

	return (count);
}

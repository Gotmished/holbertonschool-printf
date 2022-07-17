#include <stdio.h>
#include "main.h"

/**
 * print_b - converts a digit to binary
 * @lsit: arg to be passed through
 *Return: count of number of char printed
 */

int print_b(va_list list)
{
	unsigned int number = va_arg(list, unsigned int);

	long bin = 0, rem, mult = 1;

	while (number != 0)
	{
		rem = number % 2;
		bin = bin + rem * mult;
		mult = mult * 10;
		number = number / 2;
	}
	printf("%d\n", bin);

	return (0);
}

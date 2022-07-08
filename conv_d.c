#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * conv_d - turn arg from va list into int
 * @list: arg from va_list
 * Return: int
 */

int conv_d(va_list list)
{
	int n;
	int count;

	n = va_arg(list, long int);
	count = print_d(n);
	return (count);
}

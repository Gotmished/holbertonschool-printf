#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 *main -
 *
 *Return:
 */

int conv_d(va_list list)
{
	long int n;
	int count;

	n = va_arg(list, long int);
	count = print_d(n);
	return (count);
}

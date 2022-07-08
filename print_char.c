#include <stdio.h>
#include "main.h"
/**
 * print_c - print a char
 * @list: the list of arguments the function _printf is receiving
 * Return: the number of characteres of the string
 */

int print_c(va_list list)
{
	char ch;

	ch = va_arg(list, int);
	_putchar(ch);
	return (1);
}

#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - replaces a %c with the arg passed
 * @format: pointer to string
 * @arg: argument passed through.
 * Return: returns pointer to format
 */

char *print_char(char *format, va_list *arg)
{
	char *chr;

	chr = malloc(sizeof(*chr) * (_strlen(format) + 1));
	if (chr == NULL)
	{
		return (NULL);
	}
	/* Copy the format into a string */
	_strcpy(chr, format);
	/* change value of the & */
	*format = va_arg(*arg, int);
	*(format + 1) = *format;
	/* change value of the address of format */
	format = format + 1;
/* check to see if it is the of the str */
	if (_strlen(chr) > 1)
		_strcpy(format, chr + 2);
	free(chr);
	return (format);
}

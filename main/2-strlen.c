#include <stdio.h>
#include <string.h>
/**
 * _strlen - returns the length of a string
 *@s: pointer to the string
 *Return: returns the string length
 */

int _strlen(const char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

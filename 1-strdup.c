#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strdup - copy and all
 * @str: pointer to the string
 *Return: char pointer
 */

char *_strdup(const char *str)
{
	char *dest;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = _strlen(str);

	dest = malloc(sizeof(*dest) * i + 1);
	if (dest == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		dest[j] = str[j];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}

#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copy the string from src and change the pointer for dest
 * @dest: dest pointer
 * @src: src pointer
 *Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/*Copy while check for null operator*/
	while (src[i] != '\0')
	{
		/*Assign the value of each index*/
		dest[i] = src[i];
		i++;
	}

	dest[i] = 0;
	return (dest);
}

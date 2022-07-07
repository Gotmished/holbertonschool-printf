#include <stdio.h>
#include <stdlib.h>
#include "../main.h"


/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("T%sest\n", "");
	len2 = printf("T%sest\n", "");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}

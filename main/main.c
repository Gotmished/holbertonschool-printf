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

	len = _printf("Print this number: %d\n", 1);
	len2 = printf("Print this number: %d\n", 1);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}

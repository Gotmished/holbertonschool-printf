#include <stdarg.h>
#include "../main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int len, len2;
	
	len = _printf("%c", '\0');
	len2 = printf("%c", '\0');
	printf("%d\n", len);
	if (len != len2)
	{
		printf("Different lengths\n");
	}
	return (0);
}

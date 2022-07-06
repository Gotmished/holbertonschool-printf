#include <stdarg.h>
#include "main.h"
#include <stdio.h>

int main(void)
{
	int len;
	len =_printf("%c", "string");
	printf("%d", len);
	return (0);
}

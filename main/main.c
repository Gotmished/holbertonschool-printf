#include <stdarg.h>
#include "../main.h"
#include <stdio.h>

int main(void)
{
	printf("Put a char here: =>%c", 'c');
	_printf("Put a char here: =>%c", 'c');
	/* printf("Unknown: [%r]"); */
	/* _printf("Unknown: [%r]"); */
	printf("Unknown: [%%]");
	_printf("Unknown: [%%]");
	return (0);
}

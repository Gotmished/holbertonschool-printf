#include <stdarg.h>
#include "../main.h"
#include <stdio.h>

int main(void)
{
	printf("stdio: Put a char here: =>%c\n", 'e');
	_printf("Ours:Put a char here: =>%c\n", 'e');
	printf("Unknown: [%%]");
	_printf("Unknown: [%%]");
	return (0);
}

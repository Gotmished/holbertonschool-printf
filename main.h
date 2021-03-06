#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

/**
 * struct print - matches variable type to appropriate print function
 * @t: var type
 * @f: print function
 */
typedef struct print
{
	char *t;
	int (*f)(va_list list);
} vars_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list list);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int print_s(va_list list);
int print_d(int n);
int conv_d(va_list list);
int print_b(va_list list);
#endif /* HOLBERTON_H */

#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
typedef struct func_sel{
	char *c;
	char *(*func)(char *, va_list *);
} s_func;
int _putchar(char c);
int _strlen(const char *s);
char *_strdup(const char *str);
void _puts(const char *str);
int _printf(const char *format, ...);
char *_strcpy(char *dest, char *src);
#endif /* _MAIN_H_ */

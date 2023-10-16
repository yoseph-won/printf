#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format_func - format specifier plus function pointer
 * @fmt: holds format specifier
 * @func: points a specific function to perform a specific task
 * Description: made to make the program easy & efficient than if else/switch
 */
typedef struct format_func
{
	char *fmt;
	int (*func)();
} format_func;

int _putchar(char c);
int _printf(const char *format, ...);
int char_print(va_list c);
int str_print(va_list s);
int percent(void);
int int_print(va_list n);
int num_print(int num);
#endif

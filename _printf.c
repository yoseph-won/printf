#include "main.h"

/**
 * _printf - a function that is like the standard library of C (printf)
 * @format: any kind of type
 * Return: the number of characters printed to stdout
 */

int _printf(const char *format, ...)
{
        va_list list;
        size_t i, j,count = 0, arg_length;
        arg_length = sizeof(*format)/(format[0]);
        char *str;
        if (format == NULL)
                return (-1);
        while (*format)
        {
                if (*format != '%')
                {
                        write(1, format, 1);
                        count++;
                }
                else
                {
                        format++;
                        if (*format == '\0')
                                break;
                        if (*format == '%')
                        {
                                write(1, format, 1);
                                count++;
                        }
                        else if (*format == 'c')
                        {
                                char charcter = va_arg(list, int);
                                write(1,&charcter, 1);
                                count++;
                        }
                        else if (*format == 's')
                        {
                                char *str = va_arg(list, char*);
                                int counter = 0;
                                while (str[counter] != '\0')
                                        counter++;

                                write(1, str, counter);
                                count += counter;
                        }
                }
                format++;
        }
        va_end(list);
}

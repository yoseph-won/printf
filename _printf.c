#include "main.h"

/**
 * _printf - a function that is like the standard library of C (printf)
 * @format: any kind of type
 * Return: the number of characters printed to stdout
 */

int _printf(const char *format, ...);

int main(int argc, char const *argv[])
{
        _printf("great work\n");
        _printf("%s\n","Yoseph");
        _printf("%c\n",'a');
        _printf("%%");
        return 0;
}

int _printf(const char *format, ...)
{
        int count = 0;
        va_list list;
        if (format == NULL)
                return (-1);
        va_start(list, format);
        while (*format)
        {
                if (*format != '%')
                {
                        write(1, format, 1);
                        count++;
                }
                else
                {
                        *format++;
                        if (*format == '\0')
                                break;
                        if (*format == '%')
                        {
                                write(1, format, 1);
                                count++;
                        }
                        else if (*format == 'c')
                        {
                                char character = va_arg(list,int);
                                write(1, &character, 1);
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



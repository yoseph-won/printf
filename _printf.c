#include "main.h"

/**
 * _printf - a function that is like the standard library of C (printf)
 * @format: any kind of type
 * Return: the number of characters printed to stdout
 */

int _printf(const char *format, ...)
{
  va_list args; //listing our arguments in to a variable arg type of va_list
  size_t i, j, count = 0,num;
  char *str;

  if (format == NULL) //if nothing is passed to a funtion as an argument
    return (-1);
  va_start(args, format); 
  for (i = 0; format[i] != '\0'; i++) //itterating in to our arguments to see if there is any placeholder or special character
  {
    if (format[i] != '%')
      _putchar(format[i]);
    else //
    {
      switch (format[i + 1])
      {
        case '%':
          _putchar('%');
          break;
        case 'c':
          _putchar(va_arg(args, int));
          break;
        case '\0':
          va_end(args);
          return (-1);
        case 's':
          str = va_arg(args, char*);
          for (j = 0; str[j] != '\0'; j++)
            _putchar(str[j]);
          break;
        case 'd':
          num = va_arg(args, int);
          num_print(num);
          break;
        default:
          _putchar(format[i]);
          _putchar(format[i + 1]);
          break;
      }
      i++;
    }
    count++;
  }
  va_end(args);
  return (count);
}

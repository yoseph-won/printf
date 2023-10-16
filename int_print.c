#include "main.h"

/**
 * int_print - print an integer number\
 * @i: the given integer
 * return
 * retun the given inter
 */

int int_print(va_list args)
{
	int number = va_arg(args, int);//assigning the argument into the number variable
	int num, last_digit, digit, exp = 1;//creating a variable 
	int count = 1;//intialize a variable count to count
	last_digit = number % 10;// using module operator to find the last digit of our integer argument
	number /= 10;
	num = number;

	if (last_digit < 0)
	{
		_putchar('-');
		num = -num;
		number = -number;
		last_digit = -last_digit;
		count++;
	}
	if (num > 0)
	{
		for (int x = 0; num / 10 != 0; x++)
		{
			exp *= 10;
			num /= 10;
		}
		num = number;
		for (int y = 0; exp > 0; y++)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num -(digit * exp);
			exp /= 10;
			count++;
		}
	}
	_putchar(last_digit + '0');
	return (count);
}

#include "main.h"
/**
 * int_print - print an integer number\
 * @i: the given integer
 * return
 * retun the given inter
 */

int dec_print(va_list args)
{
        int number = va_arg(args, int);//assigning the argument into the number variable
        int num, last_digit, digit, exp = 1;//creating a variable
        int count = 1;//intialize a variable count to count
        last_digit = number % 10;// using module operator to find the last digit of our integer argument
        number /= 10;
        num = number;

        if (last_digit < 0)
        {
                _putchar('-');
                num = -num;
                number = -number;
                last_digit = -last_digit;
                count++;
        }
        if (num > 0)
        {
                for (int x = 0; num / 10 != 0; x++)
                {
                        exp *= 10;
                        num /= 10;
                }
                num = number;
                for (int y = 0; exp > 0; y++)
                {
                        digit = num / exp;
                        _putchar(digit + '0');
                        num = num -(digit * exp);
                        exp /= 10;
                        count++;
                }
        }
        _putchar(last_digit + '0');
        return (count);
}

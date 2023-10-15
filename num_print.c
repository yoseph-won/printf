#include "main.h"
void num_print(int n)
{
 	int m;
  	if(n < 10 && n >= 0)
  	{
    	_putchar(n + '0');
    	return;
  	}
  	if (n < 0)
  	{
    	_putchar('-');
    	n = -n;
  	}
  	m = n %10;
  	num_print(n / 10);
  	_putchar(m + '0');
}

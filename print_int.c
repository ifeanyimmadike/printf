#include "main.h"
/**
 * print_int-function to print numbers
 * @n:input 
 */
void print_int(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_int(n / 10);
	}
	_putchar((n % 10) +  '0');
}

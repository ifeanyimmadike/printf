#include "main.h"
/**
 * print_hexagona-print hexagonal
 * @n:input int
 */
void print_hexagonal(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 16)
	{
		print_hexagonal(n / 16);
	}
	_putchar((n % 16) + '0');	
}

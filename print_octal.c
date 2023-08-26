#include "main.h"
/**
 * print_octal-print octagonal
 * @n:input integer
 */
void print_octal(int n)
{
	if (n == 0)
	putchar('-');
	n = -n;

	if (n / 8)
	{
		print_octal(n / 8);
	}
	_putchar((n % 8) +  '0');
}

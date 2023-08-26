#include "main.h"
/**
*print_unsigned-prints unsigned int
*@n:integer
*Return:0
*/

void print_unsigned(unsigned int n)
{
        if (n / 10)
        {
		print_unsigned(n / 10);
        }
        _putchar((n % 10) + '0');
}

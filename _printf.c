#include "main.h"
/**
 * _printf-function printf
 * @format:number of argument
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i, j, n;
	unsigned int num;
	int character_count;
	char *str;

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i] == '%')
	{
		if (format[i] == '%')
		{
			i++;
			_putchar('%');
		}
		else
		{
			switch(format[i])
			{
				case 'c':
				j = va_arg(args,int);
				_putchar(j);
				character_count++;
					break;
				case 's':
				str = va_arg(args, char*);
				if (str == NULL)
				{
					return(-1);
				}
				n = 0;
				while(str[n])
				{
					_putchar(str[n]);
					character_count++;
					n++;
				}
				break;
				case 'i':
				j = va_arg(args,int);
				print_int(j);
				break;
				case 'd':
				j = va_arg(args,unsigned int);
				print_unsigned(j);
				break;
				case 'u':
				num = va_arg(args,unsigned int);
				print_unsigned(num);
				break;
				case 'x':
				num = va_arg(args, unsigned int);
				print_hexagonal(num);
				break;
				case 'o':
				num = va_arg(args, unsigned int);
				print_octal(num);
				break;
				case 'r':
				j = va_arg(args, int);
				_putchar('%');
                                _putchar('r');
				break;
				default:
				j = va_arg(args, int);
				_putchar('%');
				_putchar(format[i]);
			}
		}
	}
	i++;
	va_end(args);
	return (character_count);
}

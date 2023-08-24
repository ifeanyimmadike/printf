#include "main.h"
/**
 * _printf-function printf
 * @format:number of argument
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i, j;
	char *str;

	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	for (i = 0 ; format[i]; i++)
	{
		while (format[i] != '%')
		{
			if (format[i] == '\0')
				return (-1);
			_putchar(format[i]);
			i++;
		}
		i++;
		switch (format[i])
		{

			case 'c': j = va_arg(args, int);
			_putchar(j);
			break;

			case 's': str = va_arg(args, char*);
			_puts(str);
			break;

			case '%': j = va_arg(args, int);
			_putchar('%');
			break;

			case 'd': j = va_arg(args, int);
			print_int(j);
			break;

			case 'i': j = va_arg(args, int);
			print_int(j);
			break;

			default: j = va_arg(args, int);
			_putchar(format[i]);
			break;
		}
	}
	va_end(args);
	return (0);
}

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
                                _putchar(format[i]);
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

	/**
	if (format[i] != '\0')
		return (-1);
	_putchar(format[i]);
	character_count;
	if (format[i] == '%')
	{
		_putchar('%');
	}
	else
		switch(format[n])
		{

			case 'c':
				j = va_arg(args, int);
				_putchar(j);
				character_count++;
					break;

			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					return (0);
				else
					_puts(str);
				character_count++;
					break;

			case 'd': 
				if (j == NULL)
					return (0);
				else
					switch(format[m])
					case 'i': j = va_arg(args,int);
				  	print_int(j);
					character_count;
				  		break;

					case 'u':
				  	j = va_arg(args,unsigned int);
				  	print_unsigned(j);
					character_count;
				  		break;

					case 'o':
				  	j = va_arg(args,unsigned int);
				  	print_octal(j);
					character_count;
				  		break;

					case 'x':
				  	j = va_arg(args,unsigned int);
				  	print_hexagonal(j);
				  		break;

					case 'len':
				  	j = va_arg(args,int);
				  	print_len(j);
				  		break;

			default: j = va_arg(args, int);
				 _putchar(37);
				 _putchar(format[i]);
				 break;
		}
	va_end(args);
	return (0);
}
*/

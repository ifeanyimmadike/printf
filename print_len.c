#include "main.h"
/**
 * print_len- function to print length
 * @s:string input pointer
 */

void print_len(const char *s)
{
	int length = strlen(s);

	int i;
	int length_str[s];
 	snprintf(length_str, sizeof(length_str), "%d", length);

 	for (i = 0; length_str[i] != '\0'; i++)
 	{
 		_putchar(length_str[i]);
 	}
}

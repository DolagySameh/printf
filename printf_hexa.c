#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
* convert_hex - recursion to convert inyo hexa
* @b: number to convert
* Return: length of hexa
*/
int convert_hex(unsigned int b)
{
	static int sum;
	char a[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	unsigned int v[] = {10, 11, 12, 13, 14, 15}, i = 0;

	if (b > 0)
		convert_hex(b / 16);
	if (b == 0)
		return (0);
	if ((b % 16) >= 10 && (b % 16) <= 15)
		while (i < 6)
		{
			if ((b % 16) == v[i])
			{
				_putchar(a[i]);
				break;
			}
			i++;
		}
	if ((b % 16) < 10)
	_putchar((b % 16) + '0');
	return (++sum);
}
/**
* printf_hex - caller to recursion
* @op: pointer to first arg
* Return: length of hexa
*/
int printf_hex(va_list op)
{
	int division = va_arg(op, int), length = convert_hex(division);

	return (length);
}


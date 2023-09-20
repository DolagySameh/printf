#include "main.h"
#include <stdarg.h>
/**
* printf_binary - convert to binary
* @op:pointer to first arg
* Return:length of binary
*/
int printf_binary(va_list op)
{
	unsigned int division = va_arg(op, unsigned int);
	int sum = 0, d, i = 0;
	int a[32];

	if (division == 0)
	{
		_putchar ('0');
		sum = 1;
	}
	while (division > 0)
	{
		d = division / 2;
		a[i] = division % 2;
		division = d;
		i++;
		sum++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(a[i] + '0');
		i--;
	}
	return (sum);
}

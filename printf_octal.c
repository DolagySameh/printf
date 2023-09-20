#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
* printf_octal - convert into octal
* Description: caller function to recursion
* @op: pointer to first argument
* Return: length of octal number
*/
int printf_octal(va_list op)
{
	unsigned int division = va_arg(op, unsigned int);
	int sum = 0, i = 0, c = 0, d, *a;
	int v = division;

	if (division == 0)
	{
		_putchar ('0');
		return (1);
	}
	while (v != 0)
	{
		v = v / 8;
		c++;
	}
	a = malloc(c * sizeof(int));
	while (division > 0)
	{
		d = division / 8;
		a[i] = division % 8;
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

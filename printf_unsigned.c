#include "main.h"
#include <stdarg.h>
/**
* printf_unsigned - prints unsigned integer
* Description: print unsigned int
* @integrals: number to print
* Return: length of number
*/
int printf_unsigned(va_list integrals)
{
	unsigned int integer_0 = va_arg(integrals, int);
	int power_int = 1, digit_int, i, a, num_len, integer_1;

	i = 0;
	if (integer_0 == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		integer_1 = integer_0;
		for (num_len = 0; integer_1 != 0; num_len++)
			integer_1 /= 10;
		a = 1;
		while (a <= num_len - 1)
		{
			power_int *= 10;
			a++;
		}
		for (a = 1; a <= num_len; a++)
		{
			digit_int = integer_0 / power_int;
			_putchar(digit_int + 48);
			i++;
			integer_0 -= digit_int * power_int;
			power_int /= 10;
		}
	}
	return (i);
}

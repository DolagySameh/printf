#include <stdarg.h>
#include "main.h"
/**
* _printf - print on stdout
* @format: format to be printed arg
* @...: arguments function take
* Return: length
*/
int _printf(const char * const format, ...)
{
	s st[] = {{"%c", printf_char}, {"%s", printf_string}, {"%%", printf_moduls},
		{"%d", printf_integer}, {"%i", printf_decimal}, {"%b", printf_binary},
		{"%u", printf_unsigned}, {"%o", printf_octal}, {"%x", printf_hex},
		{"%X", printf_HEX}, {"%S", print_string}, {"%p", printf_address},
		{"%R", printf_rotate}, {"%r", print_rev_str}};
	int k = 0, l = 0, sum = 0;
	va_list op;

	va_start(op, format);
	if (!format || (format[0] == '%' && !format[1])
			|| (format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);
	while (format[k] != '\0')
	{
		while (l < 14)
		{
			if (!(st[l].AspecifyA[0] == format[k] &&
						st[l].AspecifyA[1] == format[k + 1]))
				l++;
			else
			{
				sum += st[l].ptr(op);
				k += 2;
				if (format[k] != '\0')
				{
					l = 0;
					continue;
				}
				if (format[k] == '\0')
					break;
			}
		}
		if (format[k] == '\0')
			break;
		l = 0;
		_putchar(format[k]);
		sum++;
		k++;
	}
	return (sum);
}

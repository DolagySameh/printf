#include "main.h"
#include <stddef.h>
#include <stdarg.h>
/**
* printf_address - print address
* Description: print address
* @k: pointer to first argument
* Return: length of address
*/
int printf_address(va_list k)
{
	void *p;
	int i = 0;
	char *v = "(nil)";
	int  sum1 = 0;
	unsigned long int add;

	p = va_arg(k, void*);
	if (p == NULL)
	{
		while (v[i] != '\0')
		{
			_putchar(v[i]);
			sum1++;
		}
		return (sum1);
	}
	_putchar('0');
	_putchar('x');
	add = convert_hex((unsigned long int)p);
	return (add + 2);
}

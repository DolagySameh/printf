#include <stdarg.h>
#include <stddef.h>
#include "main.h"
/**
* printf_string - Print string
* Description: print string in stdout
* @op: pointer to first arg
* Return: length of string
*/
int printf_string(va_list op)
{
	char *st = va_arg(op, char*);
	int i = 0;

	if (st == NULL)
		st = "(null)";
	while (st[i] != '\0')
	{
		_putchar(st[i]);
		i++;
	}
	return (i);
}

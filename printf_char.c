#include "main.h"
#include <stdarg.h>
/**
* printf_char - print character
* Description: print character in stdout
* @op: pointer to first argument
* Return: length
*/
int printf_char(va_list op)
{
	int x = va_arg(op, int);

	_putchar(x);
	return (1);
}

#include "main.h"
#include <stddef.h>
#include <stdarg.h>
/**
* printf_rotate - ROT13 of string
* @op: pointer to first arg
* Return: length of rotated string
*/
int printf_rotate(va_list op)
{
	char *p = va_arg(op, char*);
	char *al = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *n = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j = 0, len = 0;

	if (p != NULL)
	{
x:
		while (p[i++] != '\0')
		{
			while (al[j++] != '\0')
			{
				if (p[i - 1] == 40)
				{
					_putchar(40);
					len++;
					break;
				}
				else if (p[i - 1] == al[j - 1])
				{
					_putchar(n[j - 1]);
					len++;
					break;
				}
				else if (p[i - 1] == 41)
				{
					_putchar(41);
					len++;
					break;
				}
			}
			j = 0;
		}
	}
	if (p == NULL)
	{
		p = "(null)";
		goto x;
	}
	return (len);
}

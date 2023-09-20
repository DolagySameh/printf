#include "main.h"

#include <stdarg.h>
#include <stddef.h>
/**
 * _isalpha  -  Checks for alphabetic character.
 * @i: The character to be checked
 *
 * Return:1 if c is lowercase, 0 otherwise
 */
int _isalpha(int i)
{
	if ((i >= 97 && i <= 122) || (i >= 65 && i <= 90))
		return (1);
	else
		return (0);
}
/**
 * print_string - print string
 * @strings : string to be printed
 * Return: size of text
 */
int print_string(va_list strings)
{
	char *string = va_arg(strings, char *);
	int i = 0, length = 0;

	if (string == NULL)
	{
		string = "(nil)";
		for (; string[i] != '\0'; i++)
			_putchar(string[i]);
		return (i);
	}
	else
	{
		for (i = 0; string[i] != '\0'; i++)
		{
			if (_isalpha(string[i]))
			{
				_putchar(string[i]);
				length++;
			}
			else if ((string[i] > 0 && string[i] < 32) || string[i] >= 127)
			{
				_putchar('\\');
				_putchar('x');
				length += 1;
				if (string[i] >= 16 && string[i] < 32)
					;
				else if (string[i] > 0 && string[i] < 16)
				{
					_putchar('0');
					length++;
				}
				length += convert_HEX(string[i]);
			}
		}
	}
	return (length);
}

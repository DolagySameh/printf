/*
 * file :  print_rev_str.c
 * code written by : Rahma Khaled
 */

#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
/**
 * print_rev_str - print string in reverse
 * @strings : string to be printed
 * Return: size of text
 */
int print_rev_str(va_list strings)
{
	char *string = va_arg(strings, char *);
	int i = 0;
	int a = 0;

	if (string == NULL)
	{
		string = ")lin(";
		while (string[i] != '\0')
		{
			_putchar(string[i]);
			i++;
			a++;
		}
		return (a);
	}

	else
	{
		i = strlen(string) - 1;
		while (i >= 0)
		{
			_putchar(string[i]);
			i--;
			a++;
		}
	}
	return (a);
}

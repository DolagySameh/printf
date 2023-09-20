#include <unistd.h>
#include "main.h"

/**
 * _putchar - print an char on standard output
 * @c: The character it take
 *
 * Return: On sucess 1.
 * On error, -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

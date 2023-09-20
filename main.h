#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list op);
int printf_string(va_list op);
int printf_moduls(va_list op);
int printf_decimal(va_list integrals);
int printf_integer(va_list integrals);
int printf_binary(va_list op);
int printf_unsigned(va_list integrals);
int printf_octal(va_list op);
int printf_hex(va_list op);
int convert_HEX(unsigned int b);
int convert_hex(unsigned int b);
int printf_HEX(va_list op);
int print_string(va_list strings);
int printf_address(va_list k);
int printf_rotate(va_list op);
int print_rev_str(va_list strings);
int _isalpha(int i);
/**
* struct x - handle specifier
* @AspecifyA: specifier as d f c s etc
* @ptr: function to implement AspecifyA
*/
typedef struct x
{
	char *AspecifyA;
	int (*ptr)(va_list op);
} s;
#endif

#include "main.h"

/**
 * printf_char - function used for printing a character
 * @val: Arguments.
 * Return: 1.
 */


int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}

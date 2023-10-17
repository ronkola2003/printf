#include "main.h"

/**
 * _putchar - this writes the char c to stdout
 * @c: This is the char to print
 *
 * Return: 1 on success
 * On error, return -1, and error errror is set appropriatetly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

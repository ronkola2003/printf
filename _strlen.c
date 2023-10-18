#include "main.h"


/**
 * _strlen - returns the len of a string.
 * @s: char pointer
 * Return: c.
 */


int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}


/**
 * _strlenc - applied for constant char pointer s
 * @s: char pointer
 * Return: c
 */


int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}

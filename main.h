#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>


/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16


/**
 * struct format - this matches the conversation specifiers for printf
 * @id: char pointer
 * @f: Function for the conversation specifier
 */

typedef struct format
{
char *id;
int (*f)();
} convert_match;

int _strlen(char *s);
int get_flags(const char *format, int *i);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_bin(va_list val);
int printf_srev(va_list args);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_rot13(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);

#endif

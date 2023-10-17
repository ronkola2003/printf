#include "main.h"

int myprintf(const char *format, ...)
{
    int count = 0;

    va_list args;
    va_start(args, format);

    while (*format != '\0')
    {
        if (*format != '%')
        {
            putchar(*format);
            count++;
        }
        else
        {
            switch (*++format)
            {
                case 'd':
                    count += fprintf(stdout, "%d", va_arg(args, int));
                    break;
                case 'c':
                    count += fprintf(stdout, "%c", va_arg(args, int));
                    break;
                case 's':
                    count += fprintf(stdout, "%s", va_arg(args, char *));
                    break;
                case 'f':
                    count += fprintf(stdout, "%f", va_arg(args, double));
                    break;
                default:
                    putchar('%');
                    putchar(*format);
                    count += 2;
                    break;
            }
        }
        format++;
    }

    va_end(args);
    return count;
}

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format != '%')
        {
            write(1, format, 1);
            count++;
        }
        else
        {
            format++;
            if (*format == 'c')
            {
                char c = va_arg(args, int);
                write(1, &c, 1);
                count++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char *);
                int len = 0;
                while (str[len])
                {
                    write(1, &str[len], 1);
                    len++;
                    count++;
                }
            }
            else if (*format == '%')
            {
                write(1, "%", 1);
                count++;
            }
        }
        format++;
    }

    va_end(args);
    return count;
}

int main(void)
{
    _printf("Test Case 1: _printf(\"Hello, World!\\n\")\n");
    _printf("Test Case 2: _printf(\"Character: %c\\n\", 'A')\n");
    _printf("Test Case 3: _printf(\"Number: %d\\n\", 42)\n");
    _printf("Test Case 4: _printf(\"String: %s\\n\", \"Hello, World!\")\n");

    myprintf("Test Case 5: myprintf(\"Hello, World!\\n\")\n");
    myprintf("Test Case 6: myprintf(\"Character: %c\\n\", 'A')\n");
    myprintf("Test Case 7: myprintf(\"Number: %d\\n\", 42)\n");
    myprintf("Test Case 8: myprintf(\"String: %s\\n\", \"Hello, World!\")\n");

    return (0);
}


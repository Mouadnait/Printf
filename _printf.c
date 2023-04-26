#include "main.h"

/**
 * _printf - Build out the printf function
 * @format: string passed with possible format specifiers
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int (*print)(va_list *);
	int count = 0;

	va_list ptr;

	va_start(ptr, format);

	while (*format)
	{
		if (*format == '%')
		{
			continue;
		}
		else
		{
			_putchar(*format);
			count++;
		}
			format++;
	}
	va_end(ptr);

	return (count);
}

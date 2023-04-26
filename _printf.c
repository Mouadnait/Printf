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
		if (*++format)
		{
			if (*format == '%')
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			print = conversion(*format);

			if (print == NULL)
			{
				_putchar(*format);
				count++;
			}
			else
				count += print(&ptr);
		}
	}
	va_end(ptr);

	return (count);
}

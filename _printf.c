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
			while (*(++format) == ' ')
				;
			if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				print = conversion(*format);
<<<<<<< HEAD

=======
>>>>>>> 60477d50f1295d580823ebd966c1a85df791f5c0
				if (print == NULL)
				{
					if (!*format)
						return (-1);
					_putchar('%');
					_putchar(*format);
					count++;
				}
				else
					count += print(&ptr);
			}
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

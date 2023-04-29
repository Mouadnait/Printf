#include "main.h"

/**
 * get_reverse - a function to print the reversed string
 * @reverse: string to pass to
 * Return: the number of characters printed
 */

int get_reverse(va_list *reverse)
{
	char *str;
	int count = 0, i = 0, begin, end;

	str = va_arg(*reverse, char*);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	end = i - 1;

	for (begin = end; begin >= 0; begin--)
	{
		_putchar(str[begin]);
	}

	return (count);
}

/**
 * get_rot - a function to print the rot13'ed string
 * @rot: string to pass to
 * Return: the number of characters printed
 */
int get_rot(va_list *rot)
{
	int i, j, count = 0;
	char *str;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	str = va_arg(*rot, char*);

	if (str == NULL)
		str = "(null)";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(str + i))
			{
				_putchar(b[j]);
				count++;
				break;
			}
		}
		if (!a[j])
		{
			_putchar(*(str + i));
			count++;
		}
	}
	return (count);
}

/**
 * get_pointer - Converts an unsigned long integer to hexadecimal and prints it
 * @num: A pointer to a va_list containing the unsigned long integer to convert
 *
 * Return: The number of characters printed
 */
int get_pointer(va_list *num)
{
	int i, j, count;
	unsigned long int decimal, rem;
	char hex[32];

	decimal = va_arg(*num, unsigned long int);
	i = count = 0;
	if (decimal == 0)
	{
		write(1,"(nil)",5);
		return (5);
	}
	while (decimal > 0)
	{
		rem = decimal % 16;
		if (rem >= 10)
		{
			hex[i] = rem + 87;
		}
		else
		{
			hex[i] = rem + 48;
		}
		decimal /= 16;
		i++;
	}

	_putchar('0');
	_putchar('x');
	count += 2;
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
		count++;
	}

	return (count);
}

/**
 * get_printable_hex_upper - Converts an unsigned integer to uppercase 
 * hexadecimal and prints it, only if it is a printable character.
 * @decimal: The unsigned integer to convert
 *
 * Return: The number of characters printed
 */
int get_printable_hex_upper(unsigned int decimal)
{
	int i, j, count;
	unsigned int rem;
	char hex[32];

	if (decimal == 0)
	{
	_putchar('0');
	return (1);
	}

	i = count = 0;
	while (decimal > 0)
	{
	rem = decimal % 16;

	if (rem >= 10)
	{
	    hex[i] = rem + 55;
	}
	else
	{
	    hex[i] = rem + 48;
	}
	decimal /= 16;
	i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
	_putchar(hex[j]);
	count++;
	}

	return (count);
}

/**
 * get_conv_string - Converts a string to a printable format and prints it
 * @arg: A pointer to a va_list containing the string to convert
 *
 * Return: The number of characters printed
 */
int get_conv_string(va_list *arg)
{
	char *str;
	int count, index;

	str = va_arg(*arg, char *);
	count = index = 0;

	if (str == NULL)
	return (write(1, "(null)", 6));
	while (str && str[index])
	{
	if (str[index] < 32 || str[index] >= 127)
	{
	    _putchar('\\');
	    _putchar('x');
	    get_printable_hex_upper(str[index]);
	    count += 2;
	}
	else
	{
	    _putchar(str[index]);
	    count++;
	}
	index++;
	}
	return (count);
}

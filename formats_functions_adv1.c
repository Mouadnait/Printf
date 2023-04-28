#include "main.h"

/**
 * get_binary - Converts an integer to binary and prints it
 * @num: A pointer to a va_list containing the integer to convert
 *
 * Return: The number of characters printed
 */
int get_binary(va_list *num)
{
	int binary[32];
	int i, j, count;
	unsigned int conv_num;

	conv_num = va_arg(*num, unsigned int);
	i = count = 0;
	while (conv_num > 0)
	{
		binary[i] = conv_num % 2;
		conv_num /= 2;
		i++;
	}

	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(binary[j] + 48);
		count++;
	}

	return (count);
}

/**
 * get_hex_lower - Converts an integer to lowercase hexadecimal and prints it
 * @num: A pointer to a va_list containing the integer to convert
 *
 * Return: The number of characters printed
 */
int get_hex_lower(va_list *num)
{
	int i, j, count;
	unsigned int decimal, rem;
	char hex[32];

	decimal = va_arg(*num, unsigned int);
	i = count = 0;
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

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
		count++;
	}

	return (count);
}

/**
 * get_hex_upper - Converts an integer to uppercase hexadecimal and prints it
 * @num: A pointer to a va_list containing the integer to convert
 *
 * Return: The number of characters printed
 */
int get_hex_upper(va_list *num)
{
	int i, j, count;
	unsigned int decimal, rem;
	char hex[32];

	decimal = va_arg(*num, unsigned int);
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
 * get_octal - Converts an integer to octal and prints it
 * @num: A pointer to a va_list containing the integer to convert
 *
 * Return: The number of characters printed
 */
int get_octal(va_list *num)
{
	unsigned int octal[32];
	int i, j, count;
	unsigned int decimal;

	decimal = va_arg(*num, unsigned int);
	i = count = 0;
	while (decimal > 0)
	{
		octal[i] = decimal % 8;
		decimal /= 8;
		i++;
	}

	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(octal[j] + 48);
		count++;
	}

	return (count);
}

/**
 * get_unsigned - Converts an unsigned integer to octal and prints it
 * @num: A pointer to a va_list containing the unsigned integer to convert
 *
 * Return: The number of characters printed
 */
int get_unsigned(va_list *num)
{
	unsigned int uns_int[32], uns_num;
	int i, j, count;

	uns_num = va_arg(*num, unsigned int);
	i = count = 0;
	while (uns_num > 0)
	{
		uns_int[i] = uns_num % 10;
		uns_num /= 10;
		i++;
	}

	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(uns_int[j] + 48);
		count++;
	}

	return (count);
}

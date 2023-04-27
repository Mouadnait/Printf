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

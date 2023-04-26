#include "main.h"

/**
 * conversion - selects the appropriate conversion
 * function for a given format specifier.
 * @c: the format specifier character
 *
 * Return: a pointer to the appropriate conversion function,
 * or NULL if no matching function is found
 */
int (*conversion(char c))(va_list *)
{
	format_t formats[] = {
		{'c', get_char},
		{'s', get_string},
		{'d', get_int},
		{'i', get_int}};
	int i;

	for (i = 0; i < 4; i++)
	{
		if (formats[i].fo == c)
			return ((formats[i].print));
	}

	return (NULL);
}

#include "main.h"

/**
 * getfunc - function is responsible for retrieving the
 * appropriate function pointer based on the provided format and index
 *
 * @format: specifies the format of the conversion specifier being processed.
 * @index: index within the format string where the conversion
 *         specifier is located.
 *
 * Return: an integer
 *
 */
int (*getfunc(const char *format, int index))(va_list, char *, unsigned int)
{
	spec_t specifiers[] = {
		{"d", print_integer}, {"i", print_integer},
		{"c", print_char}, {"s", str_print},
		{"%", percent_print}, {"u", print_uint},
		{"o", print_uoctal}, {"X", print_upper_hex},
		{"x", print_lower_hex}, {"b", binary_conversion},
		{"R", print_rot13}, {"p", print_memory_address},
		{"r", print_reverse}, {NULL, NULL}
	};

	unsigned int i, j = 0, hold = j;

	for (i = 0; i < sizeof(specifiers) / sizeof(spec_t); i++)
	{
		if (format[index] == specifiers[i].data[j])
		{
			if (specifiers[i].data[j + 1])
			{
				j++;
				if (format[index + 1] == specifiers[i].data[j])
					return (specifiers[i].f);
				else
					j = hold;
			}

			return (specifiers[i].f);
			break;
		}
	}
	return (NULL);
}


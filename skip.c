#include "main.h"

/**
 * skip - Function that handles in case of 2 specifiers.
 * @format: Pointer to the format.
 * @index: Position of the format.
 *
 * Return: Pointef function.
 */

int skip(const char *format, int index)
{
        
        spec_t specifiers[] = {
		{"R", print_rot13},
                {"b", binary_conversion},
                {"c", print_char},
                {"i", print_integer},
                {"d", print_integer},
                {"s", str_print},
                {"u", print_uint},
                {"X", print_upper_hex},
                {"x", print_lower_hex},
                {"o", print_octal},
                {"p", print_memory_address},
                {"hd", shorty_integer},
                {"hi", shorty_integer},
                {"ho", short_octal},
                {"hx", short_hex},
                {"hu", short_uint},
                {"ld", longy_integer},
                {"li", longy_integer},
                {"lo", print_octal},
                {"lu", louint},
                {"lx", print_long_lohex},
                {"lX", long_heX},
                {"r", print_reverse},
                {"S", print_codehex},
                {"#o", uoctal_print},
                {"#x", print_0xhex},
                {"#X", print_0Xhex},
                {"+d", print_plus},
                {"+i", print_plus},
                {"+u", print_uint},
                {"+x", print_lower_hex},
                {"+X", print_plus_upper_hex},
                {"%", prct},
                {" d", print_space_int},
                {" i", print_space_int},
                {" X", print_upper_hex},
                {" u", print_uint},
                {" x", print_lower_hex},
                {NULL, NULL}
        };

	int i = 0, j = 0;
	int first_index = index;

	while (specifiers[i].data != NULL)
	{
		j = 0;
		index = first_index;

		while (format[index] && format[index] == specifiers[i].data[j])
		{
			index++;
			j++;

			if (specifiers[i].data[j] == '\0')
				return (j);
		}

		i++;
	}

	return (0);
}

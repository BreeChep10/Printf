#include "main.h"
int (*getfunc(const char *format, int index))(va_list, char *, unsigned int)
{
	spec_t specifiers[] = {
		{"d", print_integer}, {"i", print_integer}, {"c", print_char}, {"s", str_print},
		{"%", percent_print}, {"u", print_uint}, /*{"o", print_uoctal},*/ {"X", print_upper_hex},
		{"x", print_lower_hex}, {"b", binary_conversion}, {"R", print_rot13}, {"p", print_memory_address},
		{"r", print_reverse}, /*{"hd", shorty_integer}, {"hi", shorty_integer}, {"ld", longy_integer},
		{"li", longy_integer}, {"S", print_codehex}, {"#x", print_0xhex}, {"#X", print_0Xhex},
		{"#o", octal_print}, {" d", _print_int}, {" d", _print_int},*/ {NULL, NULL}
	};
	int i = 0, j = 0;
	int reset = index;

	while (specifiers[i].data != NULL)
	{
		j = 0;
		index = reset;
		while (format[index] && format[index] == specifiers[i].data[j])
		{
			index++;
			j++;
			if (specifiers[i].data[j] == '\0')
				return (specifiers[i].f);
		}
		i++;
	}
	return (NULL);
}

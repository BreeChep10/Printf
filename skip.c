#include "main.h"

int skip(const char *format, int index)
{
	
	spec_t specifiers[] = {
		{"d", print_integer}, {"i", print_integer}, {"c", print_char}, {"s", str_print},
		{"%", percent_print}, {"u", print_uint}, {"o", print_uoctal}, {"X", print_upper_hex},
		{"x", print_lower_hex}, {"b", binary_conversion}, {"R", print_rot13}, {"p", print_memory_address},
		{"r", print_reverse}, {"hd", shorty_integer}, {"hi", shorty_integer}, {"ld", longy_integer},
		{"li", longy_integer}, {"#x", print_0xhex}, {"S", print_codehex}, {"#X", print_0Xhex},
		{"#o", octal_print}, {" d", _print_int}, {" d", _print_int}, {"hx", short_hex},
                {"hX", short_hex}, {"hu", short_uint}, {"ho", short_octal}, {"lu", louint},
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


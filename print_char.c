#include "main.h"

int print_char(va_list all_args, char *buffer, unsigned int buffer_size)
{
	char c;
	c = va_arg(all_args, int);
	buffer_size = add_buff(buffer, c, buffer_size);
	return (1);
}

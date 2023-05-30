#include "main.h"

int percent_print(va_list all_args __attribute__((unused)), char *buffer, unsigned int buffer_size)
{
	buffer_size = add_buff(buffer, '%', buffer_size);
	return (1);
}

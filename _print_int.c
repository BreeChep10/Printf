#include "main.h"

/**
 * print_integer - Function that prints an integer.
 */

int _print_int(va_list all_args, char *buffer, unsigned int buffer_size)
{
	int num = va_arg(all_args, int);
	int i, a, sign = 0, store = num, div = 1;
	buffer_size = add_buff(buffer, ' ', buffer_size);
	if (num == 0)
	{
		buffer_size = add_buff(buffer, '0', buffer_size);
		return 1;
	}
	if (num < 0)
		sign = 1, num *= -1, buffer_size = add_buff(buffer, '-', buffer_size);
	for (i = 0; store != 0; i++)
		store /= 10, div *= 10;
	while (div > 1)
	{
		div /= 10, a = (num / div) % 10 + '0';
		buffer_size = add_buff(buffer, a, buffer_size);
	}
	return (i + sign + 1);
}


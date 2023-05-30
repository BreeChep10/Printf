#include "main.h"

/**
 * print_integer - Function that prints an integer.
 */

int print_integer(va_list all_args, char *buffer, unsigned int buffer_size)
{
	int num = va_arg(all_args, int);
	int sign = 0, store, div = 1, count = 0;

	if (num < 0)
		sign = 1, num *= -1, buffer_size = add_buff(buffer, '-', buffer_size);
	store = num;
	while (store > 9)
		store /= 10, div *= 10;
	while(div > 0)
		buffer_size = add_buff(buffer, ((num / div) % 10) + '0', buffer_size), div /= 10, count++;
	return (count + sign);
}

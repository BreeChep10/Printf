#include "main.h"
/**
 * shorty_integer - Function the prints a short integer.
 * @all_args: Arguements taken in the list.
 * @buffer: Pointer to the temporary storage.
 * @buffer_size: Position of the buffer at runtime.
 *
 * Return: The number of characters entered to the buffer.
 */

int shorty_integer(va_list all_args, char *buffer, unsigned int buffer_size)
{
	short num = va_arg(all_args, int);
	unsigned int sign = 0, store, div = 1, count = 0;

	if (num < 0)
		sign = 1, num *= -1, buffer_size = add_buff(buffer, '-', buffer_size);
	store = num;
	while (store > 9)
		store /= 10, div *= 10;
	while (div > 0)
	{
		buffer_size = add_buff(buffer, ((num / div) % 10) + '0', buffer_size);
		div /= 10, count++;
	}
	return (count + sign);
}

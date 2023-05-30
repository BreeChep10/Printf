#include "main.h"

/**
 * print_integer - Function that prints an integer.
 * @all_args: A va_list containing the arguments passed to the printf function.
 * @buffer: A character array buffer to store the formatted output.
 * @buffer_size: The size of the buffer.
 * Return: the number of characters written to the buffer (excluding the null
 *         termination character), or -1 if an error occurs
 */

int print_integer(va_list all_args, char *buffer, unsigned int buffer_size)
{
	int num = va_arg(all_args, int);
	int i, a, sign = 0, store = num, div = 1;

	if (num == 0)
	{
		buffer_size = add_buff(buffer, '0', buffer_size);
		return (1);
	}
	if (num < 0)
	{
		sign = 1;
		num *= -1;
		buffer_size = add_buff(buffer, '-', buffer_size);
	}
	for (i = 0; store != 0; i++)
	{
		store /= 10;
		div *= 10;
	}
	while (div > 1)
	{
		div /= 10;
		a = (num / div) % 10 + '0';
		buffer_size = add_buff(buffer, a, buffer_size);
	}
	return (i + sign);
}


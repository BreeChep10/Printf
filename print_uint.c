#include "main.h"

/**
 * print_uint - Prints an unsigned integer.
 * @all_args: A list of arguments passed to the function (unused).
 * @buffer: The buffer to store the printed characters.
 * @buffer_size: The size of the buffer.
 * Return: The updated size of the buffer.
 */

int print_uint(va_list all_args, char *buffer, unsigned int buffer_size)
{
	unsigned int num, i, div = 1;
	char a;

	num = va_arg(all_args, unsigned int);

	for (i = 0; num / div > 9; i++)
		div *= 10;

	for (i = 0; div > 0; i++)
	{
		a = (num / div) % 10 + '0';
		buffer_size = add_buff(buffer, a, buffer_size);
		div /= 10;
	}

	return (i);
}

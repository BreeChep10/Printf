#include "main.h"

/**
 * short_uint - Converts a short unsigned integer to its string representation
 *              and stores it in the buffer.
 *
 * @all_args: The variable argument list containing the short unsigned integer.
 * @buffer: The character buffer to store the string representation.
 * @buffer_size: The size of the buffer to ensure no overflow occurs.
 * Return: The length of the string representation on success
 * or a negative value on failure.
 */

int short_uint(va_list all_args, char *buffer, unsigned int buffer_size)
{

	short unsigned int num, i, div = 1;
	char a;

	num = va_arg(all_args,  int);

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


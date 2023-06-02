#include "main.h"

/**
 * louint - function which calculates the length of an unsigned integer.
 *
 * @all_args: Variable argument list containing the unsigned integer.
 * @buffer: The character buffer to store the string
 *          representation of the integer.
 * @buffer_size: The size of the buffer to ensure no overflow occurs.
 * Return: The length of the integer string on success
 *         or a negative value on failure.
 */

int louint(va_list all_args, char *buffer, unsigned int buffer_size)
{
	long unsigned int num, i, div = 1;
	char a;

	num = va_arg(all_args, long int);

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



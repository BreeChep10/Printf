#include "main.h"
/**
 * print_reverse - Prints a string in reverse.
 * @all_args: A list of arguments passed to the function (unused)
 * @buffer: The buffer to store the reversed string.
 * @buffer_size: The size of the buffer.
 * Return: The updated size of the buffer.
 */

int print_reverse(va_list all_args, char *buffer, unsigned int buffer_size)
{
	int i, j, len = 0;
	const char *ptr;

	ptr = va_arg(all_args, const char *);

	for (i = 0; ptr[i] != '\0'; i++)
		len++;
	for (j = len - 1; j >= 0; j--)
		buffer_size = add_buff(buffer, ptr[j], buffer_size);
	return (len);
}

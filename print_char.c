#include "main.h"

/**
 * print_char - Handles the conversion specifier "c" to print a character.
 *
 * @all_args: va_list containing the arguments passed to the function.
 * @buffer: Pointer to the buffer where the character will be stored.
 * @buffer_size: Size of the buffer.
 *
 * Return: The updated buffer size.
 */

int print_char(va_list all_args, char *buffer, unsigned int buffer_size)
{
	char c;

	c = va_arg(all_args, int);
	buffer_size = add_buff(buffer, c, buffer_size);
	return (1);
}

#include "main.h"

/**
 * percent_print - Handles the conversion specifier "%".
 *
 * @all_args: Unused va_list parameter.
 * @buffer: Pointer to the buffer where the "%" character will be stored.
 * @buffer_size: Size of the buffer.
 *
 * Return: The updated buffer size.
 */

int percent_print(va_list all_args __attribute__((unused)), char *buffer, unsigned int buffer_size)
{
	buffer_size = add_buff(buffer, '%', buffer_size);
	return (1);
}

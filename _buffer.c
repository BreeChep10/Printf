#include "main.h"

/**
 * print_buffer - Function that prints the content of the buffer.
 *
 */

int print_buffer(char *buffer, unsigned int buffer_size)
{
	return (write(1, buffer, buffer_size));
}

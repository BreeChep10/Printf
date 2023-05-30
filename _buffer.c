#include "main.h"

/**
 * print_buffer - Function that prints the content of the buffer.
 * @buffer: contains content to be printed
 * @buffer_size: size of the buffer, specifying how many
 * characters should be printed from the buffer.
 * Return: number of characters successfully written
 */

int print_buffer(char *buffer, unsigned int buffer_size)
{
	return (write(1, buffer, buffer_size));
}

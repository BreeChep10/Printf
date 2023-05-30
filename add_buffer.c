#include "main.h"

/**
 * add_buff - function which adds a character to the
 * buffer and updating the buffer size.
 * @buffer: buffer to store the characters
 * @content: character to be added to the buffer.
 * @buffer_size: current size of the buffer
 * Return: size of the buffer
 */

unsigned int add_buff(char *buffer, char content, unsigned int buffer_size)
{
	if (buffer_size == 1024)
	{
		print_buffer(buffer, buffer_size);
		buffer_size = 0;
	}

	buffer[buffer_size] = content;
	buffer_size++;
	return (buffer_size);
}

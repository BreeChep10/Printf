#include "main.h"

/**
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

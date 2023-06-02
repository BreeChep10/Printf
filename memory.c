#include "main.h"

/**
  * print_memory_address - Prints a memory address.
  * @args: A list of arguments passed to the function.
  * @buffer: The buffer to store the printed characters.
  * @buffer_size: The size of the buffer.
  * Return: The updated size of the buffer.
  */

int print_memory_address(va_list args, char *buffer, unsigned int buffer_size)
{
	void *mem = va_arg(args, void *);
	char *err = "(nil)", *hex_array = malloc(sizeof(char) * 32 + 1);
	int i, count = 0, rem, j, test = 0;
	unsigned long num = (unsigned long)mem;

	if (!mem)
	{
		for (i = 0; err[i]; i++)
			buffer_size = add_buff(buffer, err[i], buffer_size);
		return (5);
	}
	if (!hex_array)
	{
		return (0);
		free(hex_array);
	}
	for (i = 0; i < 32; i++)
		hex_array[i] = '0';
	hex_array[32] = '\0';

	for (i = 31; i >= 0; i--)
	{
		rem = num % 16;
		if (rem < 10)
			hex_array[i] = rem + '0';
		else
			hex_array[i] = rem - 10 + 'a';
		num /= 16;
	}
	for (i = 0; i < 32; i++)
	{
		if (hex_array[i] != '0')
		break;
	}
	i--, hex_array[i] = 'x';


	for (j = 0; hex_array[j] != '\0'; j++)
	{
		if (hex_array[j + 1] != '0')
			test = 1;
		if (test == 1)
			buffer_size = add_buff(buffer, hex_array[j], buffer_size), count++;
	}

	free(hex_array);
	return (count);
}

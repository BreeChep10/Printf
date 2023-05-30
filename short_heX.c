#include "main.h"

int short_heX(va_list all_args, char *buffer, unsigned int buffer_size)
	
{
	short unsigned int num = va_arg(all_args, unsigned int);
	char *hex_array = malloc(sizeof(char) * 32 + 1), temp;
	int count = 0, start, end, rem, i, j;

	if (!hex_array)
	{
		return (0);
		free(hex_array);
	}
	while (num != 0)
	{
		rem = num % 16;
		if (rem < 10)
			hex_array[i] = rem + '0';
		else
			hex_array[i] = rem - 10 + 65;
		num /= 16, i++;
	}
	if (i == 0)
		hex_array[i] = '0', i++;

	hex_array[i] = '\0';
	start = 0, end = i - 1;

	while (start < end)
	{
		temp = hex_array[start];
		hex_array[start] = hex_array[end];
		hex_array[end] = temp;
		start++, end--;
	}
	for (j = 0; hex_array[j] != '\0'; j++)
	{
		buffer_size = add_buff(buffer, hex_array[j], buffer_size), count++;
	}
	return (count);
	free(hex_array);
}


#include "main.h"

int short_octal(va_list all_args, char *buffer, unsigned int buffer_size)
{
        
	short int num = va_arg(all_args, int), sign = 0, test = 0, count = 0;
	int i;
	char *array = malloc((32 + 1) * sizeof(char));

	if (num == 0)
	{
		buffer_size = add_buff(buffer, '0', buffer_size);
		return (1);
	}	
	for (i = 0; i < 32; i++)
		array[i] = '0';
	array[32] = '\0';
	for (i = 31; i >=0 && num > 0; i--)
		array[i] = (num % 8) + '0', num /= 8;
	for (i = 0; i < 32; i++)
	{
		if (array[i] != '0')
			test = 1;
		if (test == 1)
			buffer_size = add_buff(buffer, array[i], buffer_size), count++;
	}
	free(array);
	return (count + sign);
}


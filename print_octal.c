#include "main.h"


int print_octal(va_list all_args, char *buffer, unsigned int buffer_size)
{
	int num = va_arg(all_args, int);
	char *binary_array = malloc(sizeof(char) * 33);
	char *octal_array = malloc(sizeof(char) * (11 + 1));
	int count = 0, i, check = 0;

	if (!binary_array || !octal_array)
		return (0);

	binary_array = to_binary(binary_array, num, 32);
	octal_array = binary_to_octal(binary_array, octal_array, 11);
	for (i = 0; i < 11; i++)
	{
		if (octal_array[i] != '0')
                        check = 1;
                if (check == 1)
			buffer_size = add_buff(buffer, octal_array[i], buffer_size), count++;
	}
	free(binary_array);
	free(octal_array);

	return (count);
}

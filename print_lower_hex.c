#include "main.h"
/*
*/
int print_lower_hex(va_list all_args, char *buffer, unsigned int buffer_size)
	
{
	int num = va_arg(all_args, int);
	char *binary_array = malloc(sizeof(char) * 32 + 1), *hex_array = malloc((8 + 1) * sizeof(char));
	int count = 0, i, check = 0;

	if (!binary_array || !hex_array)
        {
                _printf("Error\n");
		return (0);
	}
	if (num == 0)
	{
		buffer_size = add_buff(buffer, '0', buffer_size);
		free(binary_array), free(hex_array);
		return (1);
	}
        binary_array = to_binary(binary_array, num, 32);
        hex_array = binary_to_hex(binary_array, hex_array, 'l', 8);
	for (i = 0; i < 8; i++)
        {
                if (hex_array[i] !='0')
                        check = 1;
                if (check == 1)
                        buffer_size = add_buff(buffer, hex_array[i], buffer_size), count++;
        }
        free(binary_array);

        free(hex_array);
	return (count);
}

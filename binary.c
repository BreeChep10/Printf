#include "main.h"

/**
 * binary_conversion - Function that converts to binary.
 * @all_args: All arguements passed.
 * @buffer: Pointer to the temporary storage.
 * @buffer_size: The position of the buffer.
 *
 * Return: Buffer_size.
 */

int binary_conversion(va_list all_args, char *buffer, unsigned int buffer_size)
{
	char *array = malloc((32 + 1) * sizeof(char));
	int i, num, test = 0, sign = 0, count = 0;

	num = va_arg(all_args, int);

	if (!array)
		return (0);
	if (num < 0)
		sign = 1, num *= -1, num -= 1;

	for (i = 0; i < 32; i++)
		array[i] = '0';
	array[32] = '\0';
	for (i = 31; num > 0; i--)
		array[i] = (num % 2) + '0', num /= 2;
	if (num != 0)
		array[i] = '1';
	for (i = 0; array[i] != '\0'; i++)
	{
		if (array[i] != '0')
			test = 1;
		if (sign)
		{
			array[i] = ((array[i] == '1') ? '0' : '1');
			buffer_size = add_buff(buffer, array[i], buffer_size);
			count++;
		}
		if (test == 1 && !sign)
			buffer_size = add_buff(buffer, array[i], buffer_size), count++;
	}
	free(array);
	return (count);
}

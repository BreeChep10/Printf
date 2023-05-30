#include "main.h"

/**
 * print_rot13 - function takes a string as input and
 *               modifies it by applying the ROT13
 *
 * @all_args: va_list containing the arguments passed to the function.
 * @buffer: Pointer to the buffer where the modified string will be stored.
 * @buffer_size: Size of the buffer.
 *
 * Return: The updated buffer size.
 */

int print_rot13(va_list all_args, char *buffer, unsigned int buffer_size)
{
	char *str = va_arg(all_args, char *);
	int i;
	char a;

	for (i = 0; str[i] != '\0'; i++)
	{
		a = str[i];
		if (a >= 'a' && a <= 'z')
		{
			a = 97 + ((a - 97 + 13) % 26);
		}
		else if (a >= 'A' && a <= 'Z')
		{
			a = 'A' + ((a - 'A' + 13) % 26);
		}
		buffer_size = add_buff(buffer, a, buffer_size);
	}
	return (buffer_size);
}

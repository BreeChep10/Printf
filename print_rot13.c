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
	int i, j, count = 0;
	char *store = "(avyy)";
	char letters[] = {'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R',
		'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'a', 'b', 'c', 'd',
		'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p',
		'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'};
	char rot[] = {'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y',
		'Z', 'A', 'B', 'C', 'D', 'E',
		'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'n', 'o', 'p', 'q',
		'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z', 'a', 'b', 'c',
		'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm'};
	if (!str)
	{
		for (i = 0; store[i]; i++)
			buffer_size = add_buff(buffer, store[i], buffer_size);
		return (6);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				buffer_size = add_buff(buffer, rot[j], buffer_size), count++;
				break;
			}	
		}
		if (str[i] != letters[j])
			buffer_size = add_buff(buffer, str[i], buffer_size), count++;
	}
	return (count);
}

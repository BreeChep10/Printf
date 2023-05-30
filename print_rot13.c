#include "main.h"

/*
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
